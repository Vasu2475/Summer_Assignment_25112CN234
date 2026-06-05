//WAP to write function for palindrome
#include <stdio.h>
#include <string.h>
void palindrome(const char word[]){
    int num=strlen(word)/2, f=0;
    if(strlen(word)%2==0){
        for(int i=0; i<=num-1; i++){
            if(word[i]!=word[strlen(word)-i-1]){
                f=1;
                break;
            }
        }
    }
    else{
        for(int i=0; i<=num; i++){
            if(word[i]!=word[strlen(word)-i-1]){
                f=1;
                break;
            }
        }
    }
    if(f!=0){
        printf("The word %s is not a palindrome",word);
    }
    else{
        printf("The word %s is a palindrome",word);
    }
}

int main(){
    char word[20];
    printf("Enter the word to check if it's palindrome or not: ");
    scanf("%s", word);
    palindrome(word);
    return 0;
}