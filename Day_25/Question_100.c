//WAP to sort words by length
#include <stdio.h>
#include <string.h>
typedef struct{
    char word[20];
}WORDS;
int main(){
    int n;
    printf("Enter how many words you wanna enter: ");
    scanf("%d", &n);
    printf("Enter %d words: \n",n);
    WORDS words[n];
    for(int i=0; i<n; i++){
        scanf("%s", &words[i].word);
    }
    int temp;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(strlen(words[j].word)>strlen(words[j+1].word)){
                WORDS temp=words[j];
                words[j]=words[j+1];
                words[j+1]=temp;
            }
        }
    }
    printf("The words sorted by length are: \n");
    for(int i=0; i<n; i++){
        printf("%s ", words[i].word);
    }   
    return 0;
}