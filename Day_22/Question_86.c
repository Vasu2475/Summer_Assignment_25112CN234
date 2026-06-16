//WAP to count words in a sentence
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
    int count=1;
    for(int i=0; i<length; i++){
        if(a[i]==' '){
            count++;
        }
    }
    printf("The number of words in the given sentence are: %d", count);
    return 0;
}