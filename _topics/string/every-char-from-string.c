//every-char-from-string.c
#include<stdio.h>

int main(void) {
    char myName[] = "Serajus Salehin";

    int i = 0;

    while (myName[i] != '\0')
    {
        printf("%c ", myName[i]);
        i++;
    }
    
}