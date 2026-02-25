#include<stdio.h>
#include<stdlib.h>
int main(void) {
    char sst[3];
    // scanf("%s", sst);
    fgets(sst, sizeof(sst), stdin);
    printf("%s\n", sst);
}