// WAP to compress a string
#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    printf("Enter the string: ");
    fgets(a, 100, stdin);
    int length = strlen(a);
    if (a[length - 1] == '\n') {
        a[length - 1] = '\0';
        length--;
    }
    printf("Compressed string: ");
    for (int i=0; i<length; i++) {
        int count = 1;
        while (a[i]==a[i+count] && i+count<length) {
            count++;
        }
        printf("%c%d", a[i], count);
        i=i+count-1;
    }
    return 0;
}