#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    printf("Enter the string: ");
    fgets(a, 100, stdin);
    int i=0, count=0;
    while(a[i]!='\0') {
        count++;
        i++;
    }
    if(a[count-1]=='\n') {
        a[count-1]='\0';
        count--;
    }
    printf("The length of %s is %d", a, count);
    return 0;
}