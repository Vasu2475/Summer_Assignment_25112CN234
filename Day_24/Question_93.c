//WAP to check string rotation
#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[100];
    printf("Enter the first string: ");
    fgets(a, 100, stdin);
    printf("Enter the second string: ");
    fgets(b, 100, stdin);
    int length_a=strlen(a);
    if (a[length_a-1]=='\n') {
        a[length_a-1]='\0';
        length_a--;
    }
    int length_b=strlen(b);
    if (b[length_b-1]=='\n') {
        b[length_b-1]='\0';
        length_b--;
    }
    if(strlen(a)==strlen(b)){
        int index=0, f=0, j=0;
        while (f==0 || j<length_a){
            if(a[0]==b[j]){
                index=j;
                f++;
                break;
            }
            j++;
        }
        f=0;
        if(index==0){
            printf("The given strings are the same!");
            return 0;
        }
        for(int i=0; i<length_a; i++){
            if(index==length_a-1){
                if(a[i]!=b[index]){
                    f++;
                }
                index=0;
            }
            else{
                if(a[i]!=b[index]){
                    f++;
                }
                index++;
            }
        }
        if(f!=0){
            printf("The given string doesn't have rotation");
        }
        else{
            printf("The given string has rotation");
        }
    }
    return 0;
}