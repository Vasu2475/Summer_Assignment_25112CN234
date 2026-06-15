//WAP to reverse a string
#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[100];
    printf("Enter the string: ");
    fgets(a, 100, stdin);
    int length=strlen(a);
    if (a[length-1]=='\n') {
        a[length-1]='\0';
        length--;
    }
    for(int i=0; i<length; i++){
        b[i]=a[length-1-i];
    }
    b[length]='\0';
    printf("The reversed string is: %s", b);
    return 0;
}