//WAP to create ticket booking system
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
struct ticket_booking{
    long long int booking_ID;
    char name[50];
    char destination_city[20];
    char origin_city[20];
    int hour_of_departure;
    int minute_of_departure;
    int hour_of_arrival;
    int minute_of_arrival;
}Entries[100];

int main(){
    srand(time(NULL));
    //Default Entry
    Entries[0]=(struct ticket_booking) {
        8509341470,
        "Vasu Pratap Singh",
        "Delhi",
        "Jaipur",
        3,
        40,
        6,
        15
    };
    int number_of_entries = 1;

    Bus_ticket_booking_system:
    printf("\n========================================\n");
    printf("        BUS TICKET BOOKING SYSTEM          \n");
    printf("========================================\n");
    printf("\nWhat do you want to do?\n");
    printf("\n1. Book a ticket\n");
    printf("\n2. Check ticket status\n");
    printf("\n3. Cancel a ticket\n");
    printf("\n4. Exit\n");
    printf("\nEnter your choice: ");
    int choice;
    scanf("%d", &choice);
    if (choice < 1 || choice > 4){
        printf("\nInvalid Choice!\n");
    }
    else{
        switch (choice){
            case 1:
                printf("\nEnter your name: ");
                getchar();
                char name[50];
                fgets(name, 50, stdin);
                name[strcspn(name, "\n")] = '\0';
                strcpy(Entries[number_of_entries].name, name);
                printf("\nWhere do you want to go?");
                char destination[20];
                fgets(destination, 20, stdin);
                destination[strcspn(destination, "\n")] = '\0';
                strcpy(Entries[number_of_entries].destination_city, destination);
                printf("\nWhere will you board the bus from?");
                char arrival[20];
                fgets(arrival, 20, stdin);
                arrival[strcspn(arrival, "\n")] = '\0';
                strcpy(Entries[number_of_entries].origin_city, arrival);
                
                printf("\nAt what time would you like to depart?\n");
                printf("\nEnter the hour: ");
                scanf("%d", &Entries[number_of_entries].hour_of_departure);
                printf("\nEnter the minute: ");
                scanf("%d", &Entries[number_of_entries].minute_of_departure);

                printf("\n\nAt what time will you reach?\n");
                printf("\nEnter the hour: ");
                scanf("%d", &Entries[number_of_entries].hour_of_arrival);
                printf("\nEnter the minute: ");
                scanf("%d", &Entries[number_of_entries].minute_of_arrival);
                Entries[number_of_entries].booking_ID = 1000000000LL + rand() % 900000000;
                printf("\nYour booking was successful!\n");
                printf("Your booking ID is %lld for your future reference", Entries[number_of_entries].booking_ID);
                number_of_entries++;
                goto Bus_ticket_booking_system;

            case 2:
                printf("Enter your Booking ID: ");
                long long int booking_ID;
                scanf("%lld", &booking_ID);
                int i=0;
                for (i=0; i<number_of_entries; i++){
                    if(Entries[i].booking_ID == booking_ID){
                        printf("\nYour booking is found!\n");
                        printf("\nYour booking is from %s to %s at %d:%d and the time of arrival is %d:%d\n", Entries[i].origin_city, Entries[i].destination_city, Entries[i].hour_of_departure, Entries[i].minute_of_departure, Entries[i].hour_of_arrival, Entries[i].minute_of_arrival);
                        printf("\nHave a safe journey %s!\n", Entries[i].name);
                        break;
                    }
                }
                if (i == number_of_entries){
                    printf("\nThere's no booking with this booking ID!\n");
                }
                goto Bus_ticket_booking_system;
             
            case 3:
                printf("Enter your Booking ID: ");
                scanf("%lld", &booking_ID);
                for (int i=0; i<number_of_entries; i++){
                    if(Entries[i].booking_ID == booking_ID){
                        for(int j=i; j<number_of_entries; j++){
                            Entries[j] = Entries[j + 1];
                        }
                        number_of_entries--;
                        printf("\nYour booking has been successfully canceled!\n");
                    }
                    else{
                        printf("\nThere's no booking with this booking ID!\n");
                    }
                }
                goto Bus_ticket_booking_system;
            case 4:
                printf("\nThanks for visiting!\n");
                break;        
        }
    }
    return 0;
}