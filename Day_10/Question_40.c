//WAP to print character of pyramid
#include <stdio.h>
int main(){
    int n;
    printf("Enter the character of rows you wanna print: ");
    scanf("%d", &n);
    int star=(n+(n-1)),blank;
    blank=star-n+2;
    star/=2;
    int character=65, place=1, f=0, number=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+(n-1); j++){
            if(j<=star || (j>=blank && j<=(n+(n-1)))){
                printf(" ");
            }
            else{   
                if((place/2)+1==number || f==1){
                    printf("%c", character);
                    character--;
                    number--;
                }
                else{
                    printf("%c", character);
                    character++;
                    number++;
                    if((place/2)+1==number){
                        f=1;
                    }
                }
            }
        }
        printf("\n");
        star--;
        blank++;
        character=65;
        place+=2;
        f=0;
        number=1;
    }
    return 0;
}