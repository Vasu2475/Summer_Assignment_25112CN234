//WAP to find first non-repeating character
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
    int f=0,k=0;
    for(int i=0; i<length; i++){
       for(int j=0; j<length; j++){
        if(a[i]==a[j] && i!=j){
            f++;
        }
       }
       if(f==0){
        printf("%c is the first non-repeating character in the given string!", a[i]);
        k=1;
        break;
       }
       f=0;
    }
    if(k==0){
        printf("The given string doesn't have any non-repeating character!");
    }
    return 0;
}