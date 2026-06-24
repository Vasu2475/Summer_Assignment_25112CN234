//WAP to create menu-driven string operations system
// WAP to create Menu-Driven String Operations System

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void string_length(char str[]);
void string_copy(char str[]);
void string_concat(char str[]);
void string_compare(char str[]);
void string_reverse(char str[]);
void uppercase(char str[]);
void lowercase(char str[]);

int main() {
    char str[100];
    int choice;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    while (1) {
        printf("\n================================");
        printf("\n   STRING OPERATIONS SYSTEM");
        printf("\n================================");
        printf("\n1. Find Length");
        printf("\n2. Copy String");
        printf("\n3. Concatenate String");
        printf("\n4. Compare Strings");
        printf("\n5. Reverse String");
        printf("\n6. Convert to Uppercase");
        printf("\n7. Convert to Lowercase");
        printf("\n8. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                string_length(str);
                break;

            case 2:
                string_copy(str);
                break;

            case 3:
                string_concat(str);
                break;

            case 4:
                string_compare(str);
                break;

            case 5:
                string_reverse(str);
                break;

            case 6:
                uppercase(str);
                break;

            case 7:
                lowercase(str);
                break;

            case 8:
                printf("\nExiting Program...\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }
    return 0;
}

void string_length(char str[]) {
    printf("\nLength of string = %lu\n", strlen(str));
}

void string_copy(char str[]) {
    char copy[100];
    strcpy(copy, str);
    printf("\nOriginal String: %s", str);
    printf("\nCopied String: %s\n", copy);
}

void string_concat(char str[]) {
    char str2[100];
    char result[200];
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    strcpy(result, str);
    strcat(result, str2);
    printf("\nConcatenated String: %s\n", result);
}

void string_compare(char str[]) {
    char str2[100];
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    int result = strcmp(str, str2);
    if (result == 0)
        printf("\nStrings are equal.\n");
    else if (result > 0)
        printf("\nFirst string is greater.\n");
    else
        printf("\nSecond string is greater.\n");
}

void string_reverse(char str[]) {
    char rev[100];
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("\nReversed String: %s\n", rev);
}

void uppercase(char str[]) {
    char temp[100];
    strcpy(temp, str);
    for (int i = 0; temp[i] != '\0'; i++) {
        temp[i] = toupper(temp[i]);
    }
    printf("\nUppercase String: %s\n", temp);
}

void lowercase(char str[]) {
    char temp[100];
    strcpy(temp, str);
    for (int i = 0; temp[i] != '\0'; i++) {
        temp[i] = tolower(temp[i]);
    }
    printf("\nLowercase String: %s\n", temp);
}