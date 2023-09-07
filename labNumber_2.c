#include <stdio.h>
#include <stdlib.h>
#define n 5

int main(){
    int arr[n];

    printf("Insert %d elements:\n", n);
    for(int i=0; i<n; i++){
        printf("%d. arr[%d]: ", (i+1), i);
        scanf("%d", (arr+i));
    }

    printf("\n\n The elements you inserted are:\n");
    for(int i=0; i<n; i++){
        printf(" %d ", *(arr+i));
    }
    printf("\n");

    return 0;
}