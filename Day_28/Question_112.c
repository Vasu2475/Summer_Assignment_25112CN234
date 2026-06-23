//WAP to create contact management system

#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    long long phone;
    char email[50];
} contacts[100];

int main() {
    int choice;
    int total_contacts = 0;
    while (1) {
        printf("\n=================================");
        printf("\n     CONTACT MANAGEMENT SYSTEM");
        printf("\n=================================");
        printf("\n1. Add Contact");
        printf("\n2. View All Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Delete Contact");
        printf("\n5. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (total_contacts >= 100) {
                    printf("\nContact list is full!\n");
                    break;
                }
                getchar();
                printf("\nEnter Name: ");
                fgets(contacts[total_contacts].name, 50, stdin);
                contacts[total_contacts].name[
                    strcspn(contacts[total_contacts].name, "\n")
                ] = '\0';
                printf("Enter Phone Number: ");
                scanf("%lld", &contacts[total_contacts].phone);
                getchar();
                printf("Enter Email: ");
                fgets(contacts[total_contacts].email, 50, stdin);
                contacts[total_contacts].email[
                    strcspn(contacts[total_contacts].email, "\n")
                ] = '\0';
                total_contacts++;
                printf("\nContact Added Successfully!\n");
                break;

            case 2:
                if (total_contacts == 0) {
                    printf("\nNo contacts available!\n");
                    break;
                }
                printf("\n----- CONTACT LIST -----\n");
                for (int i = 0; i < total_contacts; i++) {
                    printf("\nContact %d", i + 1);
                    printf("\nName  : %s", contacts[i].name);
                    printf("\nPhone : %lld", contacts[i].phone);
                    printf("\nEmail : %s\n", contacts[i].email);
                }
                break;

            case 3: {
                char search_name[50];
                int found = 0;
                getchar();
                printf("\nEnter name to search: ");
                fgets(search_name, 50, stdin);
                search_name[strcspn(search_name, "\n")] = '\0';
                for (int i = 0; i < total_contacts; i++) {
                    if (strcmp(contacts[i].name, search_name) == 0) {
                        printf("\nContact Found!");
                        printf("\nName  : %s", contacts[i].name);
                        printf("\nPhone : %lld", contacts[i].phone);
                        printf("\nEmail : %s\n", contacts[i].email);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("\nContact not found!\n");
                }
                break;
            }

            case 4: {
                char delete_name[50];
                int found = 0;
                getchar();
                printf("\nEnter name to delete: ");
                fgets(delete_name, 50, stdin);
                delete_name[strcspn(delete_name, "\n")] = '\0';
                for (int i = 0; i < total_contacts; i++) {
                    if (strcmp(contacts[i].name, delete_name) == 0) {
                        for (int j = i; j < total_contacts - 1; j++) {
                            contacts[j] = contacts[j + 1];
                        }
                        total_contacts--;
                        found = 1;
                        printf("\nContact Deleted Successfully!\n");
                        break;
                    }
                }
                if (!found) {
                    printf("\nContact not found!\n");
                }
                break;
            }

            case 5:
                printf("\nThank you for visiting!\n");
                return 0;

            default:
                printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}