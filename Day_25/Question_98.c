//WAP to find common characters in strings
#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[100];
    printf("Enter the first string: ");
    fgets(a, 100, stdin);
    printf("Enter the second string: ");
    fgets(b, 100, stdin);
    int length_a=strlen(a);
    if(a[length_a-1]=='\n'){
        a[length_a-1]='\0';
        length_a--;
    }
    int length_b=strlen(b);
    if(b[length_b-1]=='\n'){
        b[length_b-1]='\0';
        length_b--;
    }
    int k=0;
    for (int i=0; i<length_a-1; i++) {
        for (int j=i+1; j<length_a; j++) {
            if (a[i]==a[j]) {
                for (int k=j; k<length_a; k++) {
                    a[k]=a[k+1];
                }
                length_a--;
                j--;
            }
        }
    }
    k=0;
    for (int i=0; i<length_b-1; i++) {
        for (int j=i+1; j<length_b; j++) {
            if (b[i]==b[j]) {
                for (int k=j; k<length_b; k++) {
                    b[k]=b[k+1];
                }
                length_b--;
                j--;
            }
        }
    }
    char common_characters[100];
    k=0;   
    for(int i=0; i<length_a; i++){
        for(int j=0; j<length_b; j++){
            if(a[i]==b[j]){
                common_characters[k]=a[i];
                k++;
            }
        }
    }
    printf("The common characters are: ");
    for(int i=0; i<k; i++){
        printf("%c ", common_characters[i]);
    }
    return 0;
}   