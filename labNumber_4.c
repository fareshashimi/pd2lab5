#include <stdio.h>
#include <stdlib.h>
#define max 10

int main(){
    int sum=0;
    int arr[max];

    printf("Insert %d elements:\n", max);
    for(int i=0; i<max; i++){
        printf("%d, arr[%d]: ", i+1, i);
        scanf("%d", (arr+i));

        sum+=*(arr+i);
    }
    printf("\n\n The sum of %d elements is %d\n", max, sum);

    return 0;
}