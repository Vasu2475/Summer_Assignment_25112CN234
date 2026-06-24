//WAP to create menu-driven array operations system
#include <stdio.h>
int main(){
    int arr[100];
    int number_of_elements=0;
    array:
    printf("\nWhat do you want to do?\n");
    printf("\n1. Add an element\n");
    printf("\n2. Remove an element\n");
    printf("\n3. Display all the elements\n");
    printf("\n4. Search an element\n");
    printf("\n5. Sort elements\n");
    printf("\n6. Exit\n");
    printf("\nEnter your choice: ");
    int choice;
    int element;
    scanf("%d", &choice);
    if (choice < 1 || choice > 6){
        printf("Invalid choice!");
    }
    else{
        switch (choice){
            case 1:
                printf("\nEnter the element that you want to add: ");
                scanf("%d", &element);
                arr[number_of_elements]=element;
                number_of_elements++;
                goto array;
              
            case 2:{
                printf("\nEnter the element that you want to remove: \n");
                scanf("%d", &element);
                int index=-1;
                for(int i=0; i < number_of_elements; i++){
                    if(element == arr[i]){
                        index = i;
                        break;
                    }
                }
                for(int i=index; i < number_of_elements; i++){
                    arr[i] = arr[i+1];
                }
                if (index == -1){
                    printf("\nThe given element %d doesn't exist in the given array!\n");
                }
                else{
                    printf("\nElement removed successfully!\n");
                    number_of_elements--;
                }
                goto array;
            }

            case 3: 
                if (number_of_elements > 0){
                    printf("\nAll the elements of the array are listed below: \n");
                    for(int i=0; i<number_of_elements; i++){
                    printf("%d ", arr[i]);
                    }
                }
                else{
                    printf("\nThere are no elements in the array!\n");
                }
                goto array;

            case 4:{
                printf("\nWhich element would you like to search for? ");
                scanf("%d", &element);
                int index = -1;
                for(int i=0; i < number_of_elements; i++){
                    if(arr[i] == element){
                        index = i;
                    }
                }
                if (index == -1){
                    printf("\nThe given element %d is not in the array!\n", element);
                }
                else{
                    printf("\nThe given element %d is the index %d\n", element, index+1);
                }
                goto array;
            }

            case 5:{
                int temp;
                if (number_of_elements > 1){
                    printf("\nAll the sorted elements of the array are listed below: \n");
                    for(int i=0; i<number_of_elements; i++){
                        for(int j=0; j<number_of_elements-i-1; j++){
                            if (arr[j] > arr[j + 1]) {
                                temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                            }    
                        }
                    }
                    for(int i=0; i<number_of_elements; i++){
                        printf("%d ", arr[i]);
                    }
                }
                else{
                    printf("\nThere are not enough elements to sort!\n");
                }
                goto array;
            }

            case 6:
                printf("\nThanks!\n");
                break;
        }
    }
    return 0;
}
