//WAP to create student record system using arrays and strings
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float gpa;
};

void addStudentRecord(struct Student students[], int *count);
void displayAllRecords(const struct Student students[], int count);
void searchStudentByRoll(const struct Student students[], int count);

int main() {
    struct Student database[100];
    int student_count = 0;
    int choice;
    do {
        printf("\n======================================\n");
        printf("        STUDENT RECORD SYSTEM          \n");
        printf("======================================\n");
        printf("\n1. Add Student Record\n");
        printf("\n2. Display All Records\n");
        printf("\n3. Search Student by Roll Number\n");
        printf("\n4. Exit\n");
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);

        while (getchar() != '\n'); 

        switch (choice) {
            case 1:
                addStudentRecord(database, &student_count);
                break;
            case 2:
                displayAllRecords(database, student_count);
                break;
            case 3:
                searchStudentByRoll(database, student_count);
                break;
            case 4:
                printf("\nThanks for visiting!\n");
                break;
            default:
                printf("\nInvalid choice! Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);
    return 0;
}

void addStudentRecord(struct Student students[], int *count) {
    if (*count >= 100) {
        printf("\nError: System memory full! Cannot add more records.\n");
        return;
    }
    printf("\nEnter Roll Number: ");
    scanf("%d", &students[*count].roll_no);
    while (getchar() != '\n');
    printf("\nEnter Student Name: ");
    fgets(students[*count].name, 50, stdin);
    students[*count].name[strcspn(students[*count].name, "\n")] = '\0';
    printf("\nEnter GPA: ");
    scanf("%f", &students[*count].gpa);
    (*count)++;
    printf("\nRecord added successfully!\n");
}

void displayAllRecords(const struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo student records found in the database.\n");
        return;
    }
    printf("\n%-10s %-30s %-5s\n", "Roll No", "Name", "GPA");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-10d %-30s %-5.2f\n", students[i].roll_no, students[i].name, students[i].gpa);
    }
}

void searchStudentByRoll(const struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo records available to search.\n");
        return;
    }
    int target_roll;
    int found = 0;
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &target_roll);
    for (int i = 0; i < count; i++) {
        if (students[i].roll_no == target_roll) {
            printf("\nRecord Found:\n");
            printf("Roll Number: %d\n", students[i].roll_no);
            printf("Name:        %s\n", students[i].name);
            printf("GPA:         %.2f\n", students[i].gpa);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("\nStudent with Roll Number %d not found.\n", target_roll);
    }
}
