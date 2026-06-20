//WAP to create ATM simulation
#include <stdio.h>
int ATM(int *balance, int *pin, int *wrong_pin){
    int option;
    printf("\nWhat do you wanna do?\n1) Withdraw Money\n2) Deposit Money\n3) Check Balance\n4) Change PIN\n5) Exit");
    printf("\nEnter you choice: ");
    scanf("%d", &option);
    int temp_pin;
    switch (option){
        case 1:
            printf("\nEnter the PIN: ");
            scanf("%d", &temp_pin);
            if(*pin==temp_pin){
                printf("\nHow much money do you want to withdraw? ");
                int withdrawal;
                scanf("%d", &withdrawal);
                if(withdrawal>*balance){
                    printf("\nYour don't have %d in your account\nYour current account balance is: %d\n",withdrawal, *balance);
                }
                else if(withdrawal<100){
                    printf("\nThe amount is too low to withdraw!\n");
                }
                else{
                    printf("Withdrawal successful!");
                    *balance-=withdrawal;
                    printf("\nYour new balance is: %d\n", *balance);
                }
                ATM(balance, pin, wrong_pin);
            }
            else{
                printf("\nThe PIN is incorrect!\n");
                (*wrong_pin)++;
                if(*wrong_pin==3){
                    printf("Too many wrong attempts!\nYour account is blocked for the next 24 hours!");
                    goto case_5;
                    break;
                }
                else{
                    ATM(balance, pin, wrong_pin);                }
            }
            break;

        case 2:
            printf("\nEnter the PIN: ");
            scanf("%d", &temp_pin);
            if(*pin==temp_pin){
                printf("\nHow much money do you want to deposit? ");
                int deposit;
                scanf("%d", &deposit);
                if(deposit<100){
                    printf("\nAmount too low to deposit!\n");
                }
                else{
                    printf("\nDeposit successful!\n");
                    *balance+=deposit;
                    printf("\nYour new balance is: %d\n", *balance);
                }
                ATM(balance, pin, wrong_pin);
            }
            else{
                printf("\nThe PIN is incorrect!\n");
                (*wrong_pin)++;
                if(*wrong_pin==3){
                    printf("Too many wrong attempts!\nYour account is blocked for the next 24 hours!");
                    goto case_5;
                    break;
                }
                else{
                    ATM(balance, pin, wrong_pin);
                }
            }
            break;
        
        case 3:
            printf("\nEnter the PIN: ");
            scanf("%d", &temp_pin);
            if(*pin==temp_pin){
                printf("\nYour balance is: %d\n", *balance);
                ATM(balance, pin, wrong_pin);
            }
            else{
                printf("\nThe PIN is incorrect!\n");
                (*wrong_pin)++;
                if(*wrong_pin==3){
                    printf("Too many wrong attempts!\nYour account is blocked for the next 24 hours!");
                    goto case_5;
                    break;
                }
                else{
                    ATM(balance, pin, wrong_pin);
                }
            }
            break;
        
        case 4:
            printf("\nEnter your previous pin: ");
            scanf("%d", &temp_pin);
            if(*pin==temp_pin){
                printf("\nEnter your new pin: ");
                int new_pin;
                scanf("%d", &new_pin);
                *pin=new_pin;
                printf("\nPIN change successful!\n");
                ATM(balance, pin, wrong_pin);
            }
            else{
                printf("\nThe given PIN is incorrect!\n");
                (*wrong_pin)++;
                if(*wrong_pin==3){
                    printf("Too many wrong attempts!\nYour account is blocked for the next 24 hours!");
                    goto case_5;
                    break;
                }
                else{
                    ATM(balance, pin, wrong_pin);
                }
            }
            break;

        case 5:
            case_5:
            break;
         
        default:
            printf("\nInvalid choice!\n");
            ATM(balance, pin, wrong_pin);    
    }
    return 0;
}
int main(){
    int balance=20000;
    int pin=0000;
    int wrong_pin=0;
    ATM(&balance, &pin, &wrong_pin);
    return 0;
}