//WAP to create student record management system
#include <stdio.h>
#include <string.h>
struct student_management{
    char name[50];
    int roll_number;
    char email[40];
    long long int phone_number;
    char address[60];
};
int main(){
    struct student_management students[100];
    //default entry
    students[0]=(struct student_management){
        "Vasu Pratap Singh",
        34521,
        "vasusingh@fakemail.in",
        9310400000,
        "Delta-2, Greater Noida"
    };

    int number_of_entries=1;
    int f=0;
    while(f==0){
        printf("\nWhat do you want to do?\n1) Add a student\n2) Remove a student\n3) Display the details of all the students\n4) Display a particular student's details\n5) Exit");
        printf("\nEnter your choice: ");
        int option;
        scanf("%d", &option);
        if(option<1 || option>5){
            printf("Invalid Option!");
        }
        else{
            switch (option){
                case 1:
                    printf("Enter the roll number of the student: ");
                    scanf("%d", &students[number_of_entries].roll_number);
                    printf("Enter the name of the student: ");
                    scanf(" %49[^\n]", students[number_of_entries].name);
                    printf("Enter the phone number: ");
                    scanf("%lld", &students[number_of_entries].phone_number);
                    printf("Enter the e-mail address: ");
                    scanf(" %39[^\n]", students[number_of_entries].email);
                    printf("Enter the address: ");
                    scanf(" %59[^\n]", students[number_of_entries].address);
                    printf("\nStudent added successfully!");
                    number_of_entries++;
                    printf("\n");
                    break;
                
                case 2:
                    printf("Enter the roll number of the student you want to remove: ");
                    int remove;
                    scanf("%d", &remove);
                    int remove_index;
                    for(int i=0; i<number_of_entries; i++){
                        if(students[i].roll_number==remove){
                            remove_index=i;
                        }
                    }
                    for(int i=remove_index; i<number_of_entries; i++){
                        students[i].roll_number=students[i+1].roll_number;
                        strcpy(students[i].name, students[i+1].name);
                        students[i].phone_number=students[i+1].phone_number;
                        strcpy(students[i].address, students[i+1].address);
                        strcpy(students[i].email, students[i+1].email);
                        number_of_entries--;
                    }
                    printf("\nStudent removed successfully!\n");
                    printf("\n");
                    break;
                
                case 3:
                    for(int i=0; i<number_of_entries; i++){
                        printf("\nStudent %d\n", i+1);
                        printf("Roll Number: %d", students[i].roll_number);
                        printf("\nName: %s", students[i].name);
                        printf("\nEmail Address: %s", students[i].email);
                        printf("\nPhone Number: %d", students[i].phone_number);
                        printf("\nAddress: %s", students[i].address);
                        printf("\n");
                    }
                    break;
                
                case 4:
                    printf("\nEnter the roll number of the student you want the details of: ");
                    int details_roll;
                    scanf("%d", &details_roll);
                    int details_index;
                    for(int i=0; i<number_of_entries; i++){
                        if(students[i].roll_number==details_roll){
                            details_index=i;
                        }
                    }
                    printf("\nDetails of the student are given below: \n");
                    printf("\nRoll Number: %d", students[details_index].roll_number);
                    printf("\nName: %s", students[details_index].name);
                    printf("\nEmail Address: %s", students[details_index].email);
                    printf("\nPhone Number: %d", students[details_index].phone_number);
                    printf("\nAddress: %s", students[details_index].address);
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