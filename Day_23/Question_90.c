//WAP to find first repeating character

/*The question is ambiguous so I am assuming that "first repeating character" means that 
"the first character that repeats itself while moving left to right in the string".
Another interpretation can be that it means "the character that repeats itself first 
while moving left to right" in case of more than one repeating characters.
But I have assumed the former!*/

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
       if(f!=0){
        printf("%c is the first repeating character in the given string!", a[i]);
        k=1;
        break;
       }
       f=0;
    }
    if(k==0){
        printf("The given string doesn't have any repeating character!");
    }
    return 0;
}