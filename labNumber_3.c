#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);

int main(){
    int x=1, y=2;

    printf("\n\n Before: %d, %d\n", x, y);
    swap(&x, &y);
    printf(" After: %d, %d\n", x, y);
    
    return 0;
}

void swap(int *p1, int *p2){
    int p;

    p = *p1;
    *p1 = *p2;
    *p2 = p;
}