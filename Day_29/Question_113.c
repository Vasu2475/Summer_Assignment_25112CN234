//WAP to create menu-driven calculator
#include <stdio.h>
int main(){
    calculator:
    printf("\n======================================\n");
    printf("              CALCULATOR               \n");
    printf("======================================\n");
    printf("\nWhat do you want to do?\n");
    printf("\n1. Add (+)\n");
    printf("\n2. Subtract (-)\n");
    printf("\n3. Multiply (*)\n");
    printf("\n4. Divide (/)\n");
    printf("\n5. Exit\n");
    printf("\nEnter your choice: ");
    int choice, a, b;
    scanf("%d", &choice);
    if (choice < 1 || choice > 5) {
        printf("\nInvalid choice!\n");
        goto calculator;
    }
    else {
        switch (choice){
            case 1:
                printf("\nEnter the first number: ");
                scanf("%d", &a);
                printf("\nEnter the second number: ");
                scanf("%d", &b);
                printf("\n%d + %d = %d\n", a, b, a+b);
                goto calculator;
            
            case 2:
                printf("\nEnter the first number: ");
                scanf("%d", &a);
                printf("\nEnter the second number: ");
                scanf("%d", &b);
                printf("\n%d - %d = %d\n", a, b, a-b);
                goto calculator;    

            case 3:
                printf("\nEnter the first number: ");
                scanf("%d", &a);
                printf("\nEnter the second number: ");
                scanf("%d", &b);
                printf("\n%d * %d = %d\n", a, b, a*b);
                goto calculator;
            
            case 4:
                printf("\nEnter the first number: ");
                scanf("%d", &a);
                printf("\nEnter the second number: ");
                scanf("%d", &b);
                printf("\n%d / %d = %d\n", a, b, a/b);
                goto calculator;
             
            case 5:
                break;    
        }
    }
    printf("\nThanks!\n");
    return 0;
}