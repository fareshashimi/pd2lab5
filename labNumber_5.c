#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[50]="fares";
    char rev[50];
    char *strp = str;
    char *revp = rev;
    int i=-1;

    while(*strp){
        strp++;
        i++;
    }

    while(i>=0){
        strp--;
        *revp = *strp;
        revp++;
        i--;
    }
    printf("\n\n From %s to %s\n", str, rev);

    return 0;
}