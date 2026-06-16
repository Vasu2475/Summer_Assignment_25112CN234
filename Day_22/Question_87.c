//WAP to character frequency
#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    printf("Enter the string: ");
    fgets(a, 100, stdin);
    int length=strlen(a);
    if(a[length-1]=='\n'){
        a[length-1]='\0';
        length--;
    }
    char character;
    printf("Enter the string that you wanna find frequency of: ");
    scanf("%c", &character);
    int count=0;
    for(int i=0; i<length; i++){
        if(a[i]==character){
            count++;
        }
    }
    printf("The number of character(s) %c in the given sentence are: %d", character,count);
    return 0;
}