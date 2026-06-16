//WAP to remove spaces from string
#include <stdio.h>
#include <string.h>
char remove_spaces(char *a, int index, int length){
    for(int i=index; i<length; i++){
        a[i]=a[i+1];
    }
}
int main(){
    char a[100];
    printf("Enter the string: ");
    fgets(a, 100, stdin);
    int length=strlen(a);
    if(a[length-1]=='\n'){
        a[length-1]='\0';
        length--;
    }
    for(int i=0; i<length; i++){
        if (a[i]==' '){
            remove_spaces(a,i,length);
        }
    }
    printf("The string after removing the spaces is: %s", a);
    return 0;
}