//WAP to create bank account system
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
struct Bank_Account{
    long long int Acc_number;
    char name[50];
    long int balance;
    long int password;
    int if_FD;
    long int FD;
}Account[100];

void check_balance(int index);
void deposit_money(int index, long int *balance);
void transfer_money(int index, int number_of_accounts);
void FD_status(int index);
void create_FD(int index);

int main(){
    
    //Default Account
    srand(time(NULL));
    Account[0]=(struct Bank_Account){
        8591047650,
        "Vasu Pratap Singh",
        2000000,
        12345678,
        1,         //0 if FD doesn't exists and 1 if FD exists
        20000
    };

    int number_of_accounts=1;
    Account_system:
    printf("\n========================================\n");
    printf("         NATIONAL BANK OF INDIA            \n");
    printf("========================================\n");
    
    printf("Do you have an existing account or you want to create a new account?\n");
    printf("Press 1 if you have an existing account or press 2 to create a new account: ");
    int account_status;
    scanf("%d", &account_status);
    if(account_status == 1){
        printf("Enter your Account Number: ");
        long long int user_account;
        scanf("%lld", &user_account);
        int incorrect_password=0;
        int exit = 0;
        int i=0;
        while (exit==0 && i < number_of_accounts){
            if(user_account == Account[i].Acc_number){
                printf("\nAccount found!\n");
                printf("\nEnter your password: ");
                long int user_password;
                scanf("%ld", &user_password);
                if(user_password == Account[i].password){
                    choices:
                    printf("\nWhat do you want to do?\n");
                    printf("1. Check Balance\n");
                    printf("2. Deposit Money\n");
                    printf("3. Transfer money to another account\n");
                    printf("4. Check FD status\n");
                    printf("5. Create a new FD\n");
                    printf("6. Exit\n");
                    printf("Enter your choice: ");
                    int choice;
                    scanf("%d", &choice);
                    if (choice<1 || choice>6){
                        printf("Invalid choice!");
                    }
                    else{
                        switch (choice){
                            case 1:
                                check_balance(i);
                                goto choices;
                            case 2:
                                deposit_money(i, &Account[i].balance);
                                goto choices;
                            case 3:
                                transfer_money(i, number_of_accounts);
                                goto choices;
                            case 4:
                                FD_status(i);
                                goto choices;
                            case 5:
                                create_FD(i);
                                goto choices;
                            case 6:
                                exit=1;
                                printf("\nThanks for visiting!\n");
                                break;
                        }
                    }
                }
                else{
                    printf("Incorrect Password!");
                    incorrect_password++;
                    if(incorrect_password == 3){
                        printf("Too many wrong attempts!\n");
                        printf("Your account is blocked for the next 24 hours!");
                        exit=1;
                    }
                }
                break;
            }
            i++;
        }
        if(i == number_of_accounts){
            printf("\nAccount not found!\n");
        }
        i=0;
    }
    else if (account_status == 2){
        printf("\nLets create a new account for you!\n");
        int tm = time(0);
        Account[number_of_accounts].Acc_number = 1000000000LL + rand() % 900000000;
        printf("\nAccount Number for you new account is: %lld\n", Account[number_of_accounts].Acc_number);
        printf("\nEnter your name: ");
        char name[50];
        getchar();
        fgets(name, 50, stdin);
        name[strcspn(name, "\n")] = '\0';
        strcpy(Account[number_of_accounts].name, name);
        printf("\nHow much money do you want to put in your bank account? ");
        scanf("%ld", &Account[number_of_accounts].balance);
        printf("\nSetup a new password for you account: ");
        scanf("%ld", &Account[number_of_accounts].password);
        Account[number_of_accounts].if_FD = 0;
        number_of_accounts++;
        printf("\nNew bank account successfully created!\n");
        goto Account_system;
    }
    else{
        printf("\nInvalid choice!");
    }
    return 0;
}

void check_balance(int index){
    printf("\nThe balance of the account with Account Number %lld is: %ld\n", Account[index].Acc_number, Account[index].balance);
}

void deposit_money(int index, long int *balance){
    printf("\nHow much money do you want to deposit? ");
    long int dep_money;
    scanf("%ld", &dep_money);
    *balance+=dep_money;
    printf("\nYour New Balance is: %ld", *balance);
}

void transfer_money(int index, int number_of_accounts){
    printf("Enter the account number you want to transfer money to: ");
    long int user_account;
    scanf("%ld", &user_account);
    for(int i=0; i<number_of_accounts; i++){
        if(user_account == Account[i].Acc_number){
            printf("How much money do you want to transfer to the account number %ld? ", user_account);
            long int transfer_amount;
            scanf("%ld", &transfer_amount);
            if(transfer_amount>Account[index].balance){
                printf("There's not sufficient amount in your account!");
            }
            else{
                printf("\nTransfer Successful!\n");
                printf("%ld transfered to account number %lld from account number %lld\n", transfer_amount, Account[i].Acc_number, Account[index].Acc_number);
                Account[index].balance -= transfer_amount;
                Account[i].balance += transfer_amount;
            }
        }
    }
}

void FD_status(int index){
    if(Account[index].if_FD == 0){
        printf("\nThere is not Fixed Deposit in the name of your account!\n");
    }
    else{
        printf("You have %ld in your Fixed Deposit @ 7.4 percent per annum", Account[index].FD);
        Account[index].if_FD = 1;
    }
}

void create_FD(int index){
    printf("How much money do you want to put in your Fixed Deposit?\n");
    long int FD;
    scanf("%ld", &FD);
    Account[index].FD=FD;
    Account[index].if_FD = 1;
    printf("\nFD created for %ld @ 7.4 percentage per annum\n", FD);
}
