//WAP to print number pyramid
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows you wanna print: ");
    scanf("%d", &n);
    int star=(n+(n-1)),blank;
    blank=star-n+2;
    star/=2;
    int number=1,place=1, f=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+(n-1); j++){
            if(j<=star || (j>=blank && j<=(n+(n-1)))){
                printf(" ");
            }
            else{   
                if((place/2)+1==number || f==1){
                    printf("%d", number);
                    number--;
                }
                else{
                    printf("%d", number);
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
        number=1;
        place+=2;
        f=0;
    }
    return 0;
}