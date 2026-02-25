//getString-printChars.c

#include<stdio.h>
int main(void) {
    char name[100];
    printf("Enter name to show chars: ");
    fgets(name, sizeof(name), stdin);
    
    int i=0;
    while (name[i] != '\0')
    {
        printf("%c\n", name[i]);
        i++;
    }
    

}