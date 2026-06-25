//WAP to create mini employee management system
#include <stdio.h>
#include <string.h>
struct employee_management{
    char name[50];
    char designation[20];
    int Employee_ID;
    char email[40];
    long long int phone_number;
    char address[60];
};
int main(){
    struct employee_management employees[100];
    //default entry
    employees[0]=(struct employee_management){
        "Vasu Pratap Singh",
        "SDE-2",
        34521,
        "vasusingh@fakemail.in",
        9310400000,
        "Delta-2, Greater Noida"
    };

    int number_of_entries=1;
    int f=0;
    while(f==0){
        printf("\nWhat do you want to do?\n1) Add an employee\n2) Remove an employee\n3) Display the details of all the employees\n4) Display a particular employee's details\n5) Exit");
        printf("\nEnter your choice: ");
        int option;
        scanf("%d", &option);
        if(option<1 || option>5){
            printf("Invalid Option!");
        }
        else{
            switch (option){
                case 1:
                    printf("Enter the Employee ID of the employee: ");
                    scanf("%d", &employees[number_of_entries].Employee_ID);
                    printf("Enter the name of the employee: ");
                    scanf(" %49[^\n]", employees[number_of_entries].name);
                    printf("Enter the designation of the employee: ");
                    scanf(" %19[^\n]", employees[number_of_entries].designation);
                    printf("Enter the phone number: ");
                    scanf("%lld", &employees[number_of_entries].phone_number);
                    printf("Enter the e-mail address: ");
                    scanf(" %39[^\n]", employees[number_of_entries].email);
                    printf("Enter the address: ");
                    scanf(" %59[^\n]", employees[number_of_entries].address);
                    printf("\nEmployee added successfully!");
                    number_of_entries++;
                    printf("\n");
                    break;
                
                case 2:
                    printf("Enter the Employee ID of the employee you want to remove: ");
                    int remove;
                    scanf("%d", &remove);
                    int remove_index;
                    for(int i=0; i<number_of_entries; i++){
                        if(employees[i].Employee_ID==remove){
                            remove_index=i;
                        }
                    }
                    for(int i=remove_index; i<number_of_entries; i++){
                        employees[i].Employee_ID=employees[i+1].Employee_ID;
                        strcpy(employees[i].name, employees[i+1].name);
                        strcpy(employees[i].designation, employees[i+1].designation);
                        employees[i].phone_number=employees[i+1].phone_number;
                        strcpy(employees[i].address, employees[i+1].address);
                        strcpy(employees[i].email, employees[i+1].email);
                        number_of_entries--;
                    }
                    printf("\nEmployee removed successfully!\n");
                    printf("\n");
                    break;
                
                case 3:
                    for(int i=0; i<number_of_entries; i++){
                        printf("\nEmployee %d\n", i+1);
                        printf("Roll Number: %d", employees[i].Employee_ID);
                        printf("\nName: %s", employees[i].name);
                        printf("\nDesignation: %s", employees[i].designation);
                        printf("\nEmail Address: %s", employees[i].email);
                        printf("\nPhone Number: %d", employees[i].phone_number);
                        printf("\nAddress: %s", employees[i].address);
                        printf("\n");
                    }
                    break;
                
                case 4:
                    printf("\nEnter the Employee ID of the employee you want the details of: ");
                    int details_ID;
                    scanf("%d", &details_ID);
                    int details_index;
                    for(int i=0; i<number_of_entries; i++){
                        if(employees[i].Employee_ID==details_ID){
                            details_index=i;
                        }
                    }
                    printf("\nDetails of the employee are given below: ");
                    printf("\nRoll Number: %d", employees[details_index].Employee_ID);
                    printf("\nName: %s", employees[details_index].name);
                    printf("\nDesignation: %s", employees[details_index].designation);
                    printf("\nEmail Address: %s", employees[details_index].email);
                    printf("\nPhone Number: %d", employees[details_index].phone_number);
                    printf("\nAddress: %s", employees[details_index].address);
                    printf("\n");
                    break;
                
                case 5:
                    printf("\n");
                    printf("Thanks for visiting!");
                    f=1;
                    break; 
            }
        }
    }
    return 0;
}