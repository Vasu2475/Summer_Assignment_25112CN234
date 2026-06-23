//WAP to create library management system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_TITLE 100
#define MAX_AUTHOR 100
#define FILE_NAME "library_data.dat"
struct Book {
    int id;
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    int is_issued;
};
void display_menu();
void add_book();
void view_books();
void search_book();
void issue_book();
void return_book();
void delete_book();
int main() {
    int choice;
    while (1) {
        display_menu();
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        switch (choice) {
            case 1: add_book(); break;
            case 2: view_books(); break;
            case 3: search_book(); break;
            case 4: issue_book(); break;
            case 5: return_book(); break;
            case 6: delete_book(); break;
            case 7: 
                printf("\nThank you for using the Library Management System!\n");
                exit(0);
            default: 
                printf("Invalid selection. Please choose options 1 through 7.\n");
        }
    }
    return 0;
}
void display_menu() {
    printf("\n========================================\n");
    printf("       LIBRARY MANAGEMENT SYSTEM        \n");
    printf("========================================\n");
    printf("1. Add a New Book\n");
    printf("2. View All Books\n");
    printf("3. Search for a Book\n");
    printf("4. Issue a Book\n");
    printf("5. Return a Book\n");
    printf("6. Delete a Book\n");
    printf("7. Exit System\n");
    printf("========================================\n");
}

void add_book() {
    FILE *fp = fopen(FILE_NAME, "ab");
    if (fp == NULL) {
        printf("Error opening database file!\n");
        return;
    }
    struct Book new_book;
    new_book.is_issued = 0;
    printf("\nEnter Unique Book ID (Integer): ");
    scanf("%d", &new_book.id);
    while (getchar() != '\n');
    printf("Enter Book Title: ");
    fgets(new_book.title, MAX_TITLE, stdin);
    new_book.title[strcspn(new_book.title, "\n")] = 0;
    printf("Enter Author Name: ");
    fgets(new_book.author, MAX_AUTHOR, stdin);
    new_book.author[strcspn(new_book.author, "\n")] = 0;
    fwrite(&new_book, sizeof(struct Book), 1, fp);
    fclose(fp);
    printf("\nBook added successfully!\n");
}

void view_books() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (fp == NULL) {
        printf("\nNo records found. The library database is currently empty.\n");
        return;
    }
    struct Book temp;
    printf("\n%-10s %-30s %-25s %-15s\n", "Book ID", "Title", "Author", "Status");
    printf("-------------------------------------------------------------------------\n");
    while (fread(&temp, sizeof(struct Book), 1, fp) == 1) {
        printf("%-10d %-30s %-25s %-15s\n", 
               temp.id, temp.title, temp.author, 
               (temp.is_issued == 1) ? "Issued" : "Available");
    }
    fclose(fp);
}

void search_book() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (fp == NULL) {
        printf("\nNo books registered in system.\n");
        return;
    }
    int search_id, found = 0;
    struct Book temp;
    printf("\nEnter Book ID to search: ");
    scanf("%d", &search_id);
    while (fread(&temp, sizeof(struct Book), 1, fp) == 1) {
        if (temp.id == search_id) {
            printf("\n--- Book Found ---\n");
            printf("ID: %d\nTitle: %s\nAuthor: %s\nStatus: %s\n", 
                   temp.id, temp.title, temp.author, 
                   (temp.is_issued == 1) ? "Issued" : "Available");
            found = 1;
            break;
        }
    }
    fclose(fp);
    if (!found) printf("\nBook ID %d was not found.\n", search_id);
}

void issue_book() {
    FILE *fp = fopen(FILE_NAME, "rb+");
    if (fp == NULL) {
        printf("\nNo books available to issue.\n");
        return;
    }
    int issue_id, found = 0;
    struct Book temp;
    printf("\nEnter Book ID to Issue: ");
    scanf("%d", &issue_id);
    while (fread(&temp, sizeof(struct Book), 1, fp) == 1) {
        if (temp.id == issue_id) {
            found = 1;
            if (temp.is_issued == 1) {
                printf("\nSorry, this book is already issued out.\n");
            } else {
                temp.is_issued = 1;
                fseek(fp, -sizeof(struct Book), SEEK_CUR);
                fwrite(&temp, sizeof(struct Book), 1, fp);
                printf("\nBook issued successfully!\n");
            }
            break;
        }
    }
    fclose(fp);
    if (!found) printf("\nBook ID %d not found.\n", issue_id);
}

void return_book() {
    FILE *fp = fopen(FILE_NAME, "rb+");
    if (fp == NULL) {
        printf("\nDatabase error or no entries exist.\n");
        return;
    }
    int return_id, found = 0;
    struct Book temp;
    printf("\nEnter Book ID to Return: ");
    scanf("%d", &return_id);
    while (fread(&temp, sizeof(struct Book), 1, fp) == 1) {
        if (temp.id == return_id) {
            found = 1;
            if (temp.is_issued == 0) {
                printf("\nThis book is already sitting in the library catalog.\n");
            } else {
                temp.is_issued = 0;
                fseek(fp, -sizeof(struct Book), SEEK_CUR);
                fwrite(&temp, sizeof(struct Book), 1, fp);
                printf("\nBook returned successfully!\n");
            }
            break;
        }
    }
    fclose(fp);
    if (!found) printf("\nBook ID %d not found.\n", return_id);
}

void delete_book() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (fp == NULL) {
        printf("\nNo books exist to delete.\n");
        return;
    }
    FILE *temp_fp = fopen("temp.dat", "wb");
    if (temp_fp == NULL) {
        printf("Error creating staging instance.\n");
        fclose(fp);
        return;
    }
    int target_id, found = 0;
    struct Book temp;
    printf("\nEnter Book ID to permanently delete: ");
    scanf("%d", &target_id);
    while (fread(&temp, sizeof(struct Book), 1, fp) == 1) {
        if (temp.id == target_id) {
            found = 1;
        } else {
            fwrite(&temp, sizeof(struct Book), 1, temp_fp);
        }
    }
    fclose(fp);
    fclose(temp_fp);
    remove(FILE_NAME);
    rename("temp.dat", FILE_NAME);

    if (found) {
        printf("\nBook deleted successfully!\n");
    } else {
        printf("\nBook ID %d not found.\n", target_id);
    }
}
