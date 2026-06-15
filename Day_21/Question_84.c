//WAP to convert lowercase to uppercase
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
    printf("\nBefore lowercase: %s\n", a);
    for(int i=0; i<length; i++){
        int ascii=a[i];
        if(ascii>=65 && ascii<=90){
            ascii+=32;
        }
        a[i]=ascii;
    }
    printf("After lowercase: %s",a);
    return 0;
}