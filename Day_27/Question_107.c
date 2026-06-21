//WAP to create salary management system
#include <stdio.h>
struct employee {
    int employee_ID;
    char name[50];
    float salary;
};

int main() {
    struct employee emp[100];
    int n=1;
    int choice, employee_ID, found;
    int index;
    //Default entry
    emp[0]=(struct employee){
        34521,
        "Vasu Pratap Singh",
        2400000
    };

    do {
        printf("\n\nWhat do you want to do?\n1. Add Employee\n2. View All Employee\n3. Search Employee\n4. Update Salary\n5. Delete Employee\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("\nEnter Employee ID: ");
                scanf("%d", &emp[n].employee_ID);
                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[n].name);
                printf("Enter Salary: ");
                scanf("%f", &emp[n].salary);
                n++;
                printf("\nEmployee Added Successfully!");
                break;
            case 2:
                if(n==0) {
                    printf("\nNo records found!");
                }
                else {
                    for(int i=0; i<n; i++) {
                        printf("\n\nEmployee %d", i + 1);
                        printf("\nEmployee_ID: %d", emp[i].employee_ID);
                        printf("\nName: %s", emp[i].name);
                        printf("\nSalary: %.2f", emp[i].salary);
                    }
                }
                break;
            case 3:
                printf("\nEnter Employee Employee ID to Search: ");
                scanf("%d", &employee_ID);
                found = 0;
                for(int i=0; i<n; i++) {
                    if(emp[i].employee_ID == employee_ID) {
                        printf("\nEmployee Found!");
                        printf("\n\nemployee_ID: %d", emp[i].employee_ID);
                        printf("\nName: %s", emp[i].name);
                        printf("\nSalary: %.2f", emp[i].salary);
                        found = 1;
                        break;
                    }
                }
                if(found==0)
                    printf("\nEmployee Not Found!");
                break;
            case 4:
                printf("\nEnter Employee Employee ID to Update Salary: ");
                scanf("%d", &employee_ID);
                found = 0;
                for(int i = 0; i < n; i++) {
                    if(emp[i].employee_ID == employee_ID) {
                        printf("Current Salary: %.2f", emp[i].salary);
                        printf("\nEnter New Salary: ");
                        scanf("%f", &emp[i].salary);
                        printf("\nSalary Updated Successfully!");
                        found = 1;
                        break;
                    }
                }
                if(found==0)
                    printf("\nEmployee Not Found!");
                break;
            case 5:
                printf("\nEnter Employee employee_ID to Delete: ");
                scanf("%d", &employee_ID);
                found=0;
                for(int i=0; i<n; i++) {
                    if(emp[i].employee_ID==employee_ID) {
                        index=i;
                        found=1;
                        break;
                    }
                }
                if(found==1) {
                    for(int i=index; i<n-1; i++) {
                        emp[i]=emp[i+1];
                    }
                    n--;
                    printf("\nEmployee Deleted Successfully!");
                }
                else {
                    printf("\nEmployee Not Found!");
                }
                break;

            case 6:
                printf("\nThanks for visiting!");
                break;

            default:
                printf("\nInvalid Choice!");
        }
    } while(choice != 6);
    return 0;
}