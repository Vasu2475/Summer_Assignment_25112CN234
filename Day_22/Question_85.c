//WAP to check palindrome string
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
    int f=0;
    for(int i=0; i<length/2; i++){
        if(a[i]!=a[length-1-i]){
            f=1;
        }
    }
    if (f==0){
        printf("The given string is a palindrome!");
    }
    else{
        printf("The given string is not a palindrome!");
    }
    return 0;
}