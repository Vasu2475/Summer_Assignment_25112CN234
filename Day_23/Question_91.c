//WAP to check anagram strings
#include <stdio.h>
#include <string.h>
void remove_character(char *str, int index, int length) {
    for(int i=index; i<length-1; i++) {
        str[i]=str[i+1];
    }
    str[length-1]='\0';
}
int main() {
    char a[100], b[100];
    printf("Enter the first string: ");
    fgets(a, 100, stdin);
    printf("Enter the second string: ");
    fgets(b, 100, stdin);
    int length_a=strlen(a);
    if(a[length_a-1]=='\n') {
        a[length_a-1]='\0';
        length_a--;
    }
    int length_b=strlen(b);
    if(b[length_b-1]=='\n') {
        b[length_b-1]='\0';
        length_b--;
    }
    
    if(length_a==length_b) {
        int count=0;
        int original_length=length_a;
        for(int i = 0; i < original_length; i++) {
            for(int j = 0; j < strlen(b); j++) {
                if(a[i] == b[j]) {
                    remove_character(b, j, strlen(b));
                    count++;
                    break;
                }
            }
        }
        if(count == original_length) {
            printf("The given strings are anagrams.\n");
        } 
        else {
            printf("The given strings are not anagrams.\n");
        }
    } 
    else {
        printf("Strings must have the same length to be anagrams!\n");
    }
    return 0;
}