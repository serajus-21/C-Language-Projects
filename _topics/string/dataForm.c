//dataForm.c
#include<stdio.h>

int main(void) {
    char name[20];
    char age[5];
    char uni[50];
    char living[10];

    printf("Name: "); fgets(name, sizeof(name), stdin);
    printf("age: "); fgets(age, sizeof(age), stdin);
    printf("University: "); fgets(uni, sizeof(uni), stdin);
    printf("Living: "); fgets(living, sizeof(living), stdin);

    printf("___DETAILS___\n");
    printf("%s", name);
    printf("%s", age);
    printf("%s", uni);
    printf("%s", living);
}