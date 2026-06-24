//WAP to create inventory management system
#include <stdio.h>
#include <string.h>
struct inventory_management{
    char item_name[50];
    int number_of_item;
    int price;
}Inventory[100];

int main(){
    //default item
    Inventory[0] = (struct inventory_management){
        "Chips",
        15,
        20
    };
    int number_of_elements=1;

    Inventory:

    printf("\n======================================\n");
    printf("     INVENTORY MANAGEMENT SYSTEM        \n");
    printf("======================================\n");
    printf("\nWhat do you want to do?\n");
    printf("\n1. Sell an item\n");
    printf("\n2. Add an item\n");
    printf("\n3. Update price of an item\n");
    printf("\n4. Display all the items in the inventory\n");
    printf("\n5. Exit\n");
    printf("\nEnter your choice: ");
    int choice;
    char item[50], index = -1;
    scanf("%d", &choice);
    if (choice<1 || choice >5){
        printf("\nInvalid choice!\n");
    }
    else{
        switch (choice){
            case 1:{
                getchar();
                printf("\nEnter the name of the item: ");
                fgets(item, 50, stdin);
                item[strcspn(item, "\n")] = '\0';
                for(int i=0; i<number_of_elements; i++){
                    if (strcmp(item, Inventory[i].item_name) == 0){
                        index = i;
                    }
                }
                if (index == -1){
                    printf("\nThe given item is not available!\n");
                }
                else{
                    printf("\nHow many %s do you want? ", item);
                    int num;
                    scanf("%d", &num);
                    if(num > Inventory[index].number_of_item){
                        printf("\nThere are not enough items!\n");
                    }
                    else{
                        Inventory[index].number_of_item-=num;
                        printf("\n%d %s successfully removed from the inventory!\n", num, item);
                    }
                }
                goto Inventory;
            }

            case 2:{
                printf("\nDo you want to add a new item(1) or an existing one(2)? ");
                int if_item;
                scanf("%d", &if_item);
                if(if_item == 1){
                    getchar();
                    printf("\nEnter the name of the item: ");
                    fgets(item, 50, stdin);
                    item[strcspn(item, "\n")] = '\0';
                    strcpy(Inventory[number_of_elements].item_name, item);
                    printf("\nEnter how many elements you want to add: ");
                    int num;
                    scanf("%d", &num);
                    Inventory[number_of_elements].number_of_item = num;
                    printf("\nEnter the price of the item: ");
                    int price;
                    scanf("%d", &price);
                    Inventory[number_of_elements].price = price;
                    printf("\nItem added successfully!\n");
                    number_of_elements++;
                }
                if(if_item == 2){
                    getchar();
                    printf("\nEnter the name of the item: ");
                    fgets(item, 50, stdin);
                    item[strcspn(item, "\n")] = '\0';
                    for(int i=0; i<number_of_elements; i++){
                        if (strcmp(item, Inventory[i].item_name) == 0){
                            index = i;
                        }
                    }
                    if (index == -1){
                        printf("\nThe given item is not available!\n");
                    }
                    else{
                        printf("\nHow many %s do you want to add? ", item);
                        int num;
                        scanf("%d", &num);
                        Inventory[index].number_of_item+=num;
                        printf("The number of %s are now updated to %d", item, Inventory[index].number_of_item);
                    }
                }
                else{
                    printf("Invalid choice!");
                }
                goto Inventory;
            }

            case 3:{
                getchar();
                printf("\nEnter the name of the item: ");
                fgets(item, 50, stdin);
                item[strcspn(item, "\n")] = '\0';
                for(int i=0; i<number_of_elements; i++){
                    if (strcmp(item, Inventory[i].item_name) == 0){
                        index = i;
                    }
                }
                if (index == -1){
                    printf("\nThe given item is not available!\n");
                }
                else{
                    printf("Enter the new price of %s: ", item);
                    int price;
                    scanf("%d", &price);
                    Inventory[index].price=price;
                    printf("The price of %s has been updated to %d", item, Inventory[index].price);
                }
                goto Inventory;
            }

            case 4:
                printf("   Item    Price   Tally\n");
                for(int i=0; i<number_of_elements; i++){
                    printf("   %s    %d      %d\n\n", Inventory[i].item_name, Inventory[i].price, Inventory[i].number_of_item);
                }
                goto Inventory;

            case 5:
                printf("Thanks for visiting!");
                break;
        }
    }
    return 0;
}