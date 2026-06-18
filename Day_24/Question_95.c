//WAP to find longest word
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
    int count=0, max=0, index=0;
    for(int i=0; i<length; i++){
        if(a[i]==' ' || i==length-1){
            if(count>=max){
                max=count;
                index=i-count+1;
            }
            count=0;
        }
        else{
            count++;
        }
    }
    printf("The longest word is: \n");
    for(int i=index-1; i<=index+max-1; i++){
        printf("%c", a[i]);
    }
    return 0;
}