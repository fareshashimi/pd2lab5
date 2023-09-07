#include <stdio.h>
#include <stdlib.h>

int main(){
    int x=5, y=6;
    int *p1 = &x, *p2 = &y;

    int sum = *p1 + *p2;
    printf("\n\n The sum of the inserted numbers: %d\n", sum);

    return 0;
}