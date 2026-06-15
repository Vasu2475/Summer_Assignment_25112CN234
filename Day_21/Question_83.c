//WAP to count vowels and consonants
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char a[100], b[100];
    printf("Enter the string: ");
    fgets(a, 100, stdin);
    int length=strlen(a);
    if (a[length-1]=='\n') {
        a[length-1]='\0';
        length--;
    }
    int vowels=0, consonants=0;
    for(int i=0; i<length; i++){
        tolower(a[i]);
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            vowels++;
        }
        else{
            consonants++;
        }
    }
    printf("The number of vowels and consonants in the string %s are %d and %d respectively.",a,vowels,consonants);
    return 0;
}