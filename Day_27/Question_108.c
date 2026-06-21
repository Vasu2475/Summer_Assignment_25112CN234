//WAP to create marksheet generation system
#include <stdio.h>
struct student {
    int roll_no;
    char name[50];
    float marks[5];
    float total;
    float percentage;
    char grade;
};

int main() {
    struct student s;
    printf("Marksheet Generation System\n");
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);
    printf("Enter Student Name: ");
    scanf(" %[^\n]", s.name);
    s.total = 0;
    printf("\nEnter Marks of 5 Subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
        s.total += s.marks[i];
    }
    s.percentage = s.total / 5;
    if(s.percentage >= 90)
        s.grade='A';
    else if(s.percentage >= 75)
        s.grade='B';
    else if(s.percentage >= 60)
        s.grade='C';
    else if(s.percentage >= 40)
        s.grade='D';
    else
        s.grade = 'F';
    printf("\n\n========== MARKSHEET ==========\n");
    printf("Roll Number : %d\n", s.roll_no);
    printf("Name        : %s\n", s.name);

    for(int i=0; i<5; i++) {
        printf("Subject %d   : %.2f\n", i + 1, s.marks[i]);
    }
    printf("\nTotal Marks : %.2f / 500\n", s.total);
    printf("Percentage  : %.2f%%\n", s.percentage);
    printf("Grade       : %c\n", s.grade);
    return 0;
}