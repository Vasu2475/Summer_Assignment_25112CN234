//WAP to develop complete mini project using arrays, strings and functions

//Student Database Management
#include <stdio.h>
#include <string.h>

void addStudent(int ids[], char names[][40], float marks[], int *count);
void displayStudents(const int ids[], const char names[][40], const float marks[], int count);
void searchStudent(const int ids[], const char names[][40], const float marks[], int count);
void calculateAverage(const float marks[], int count);

int main() {
    int studentIDs[100];
    char studentNames[100][40];
    float studentMarks[100];
    int currentCount = 0;
    int choice;
    do {
        printf("\n===== STUDENT DATABASE MANAGEMENT SYSTEM =====\n");
        printf("1. Add New Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Calculate Class Average Marks\n");
        printf("5. Exit Project\n");
        printf("Enter your choice (1-5): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid numeric input.\n");
            break;
        }
        getchar();
        switch (choice) {
            case 1:
                addStudent(studentIDs, studentNames, studentMarks, &currentCount);
                break;
            case 2:
                displayStudents(studentIDs, studentNames, studentMarks, currentCount);
                break;
            case 3:
                searchStudent(studentIDs, studentNames, studentMarks, currentCount);
                break;
            case 4:
                calculateAverage(studentMarks, currentCount);
                break;
            case 5:
                printf("Exiting the application. Goodbye!\n");
                break;
            default:
                printf("Invalid option! Please select between 1 and 5.\n");
        }
    } while (choice != 5);
    return 0;
}

void addStudent(int ids[], char names[][40], float marks[], int *count) {
    if (*count >= 100) {
        printf("Database full! Cannot add more students.\n");
        return;
    }
    printf("\nEnter Student ID (Integer): ");
    scanf("%d", &ids[*count]);
    getchar();
    printf("Enter Student Name: ");
    fgets(names[*count], 40, stdin);
    size_t len = strlen(names[*count]);
    if (len > 0 && names[*count][len - 1] == '\n') {
        names[*count][len - 1] = '\0';
    }
    printf("Enter Marks: ");
    scanf("%f", &marks[*count]);
    getchar();
    (*count)++;
    printf("Record added successfully!\n");
}

void displayStudents(const int ids[], const char names[][40], const float marks[], int count) {
    if (count == 0) {
        printf("\nNo student records found in database.\n");
        return;
    }
    printf("\n%-10s %-25s %-10s\n", "ID", "Name", "Marks");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%-10d %-25s %-10.2f\n", ids[i], names[i], marks[i]);
    }
}

void searchStudent(const int ids[], const char names[][40], const float marks[], int count) {
    if (count == 0) {
        printf("\nDatabase is empty.\n");
        return;
    }
    int searchID;
    int found = 0;
    printf("\nEnter Student ID to search: ");
    scanf("%d", &searchID);
    for (int i = 0; i < count; i++) {
        if (ids[i] == searchID) {
            printf("\nMatch Found:\n");
            printf("ID: %d\nName: %s\nMarks: %.2f\n", ids[i], names[i], marks[i]);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student with ID %d not found.\n", searchID);
    }
}

void calculateAverage(const float marks[], int count) {
    if (count == 0) {
        printf("\nNo data available to compute metrics.\n");
        return;
    }
    float sum = 0.0;
    for (int i = 0; i < count; i++) {
        sum += marks[i];
    }
    printf("\nTotal Students: %d\n", count);
    printf("Class Average Marks: %.2f\n", sum / count);
}
