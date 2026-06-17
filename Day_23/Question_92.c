//WAP to find maximum occuring character
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
    int f=0,count=0,k=0;
    char max;
    for(int i=0; i<length; i++){
       for(int j=0; j<length; j++){
        if(a[i]==a[j]){
            f++;
        }
       }
       if(f>count){
        count=f;
        max=a[i];
       }
       f=0;
    }
    if(count==1){
        printf("The given string doesn't have any repeating character!");
    }
    else{
        printf("The maximum occuring character in the given string is %c and it appears %d times",max, count);
    }
    return 0;
}