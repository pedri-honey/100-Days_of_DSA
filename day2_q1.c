#include<stdio.h>
 int main () {
    int i , pos, n;

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for( i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }

    printf("Enter the postion you waxnt to delte:\n");
    scanf("%d", &pos);

    for (i= pos - 1; i <n -1; i++){
        arr[i] = arr[i + 1];
    }
     
    n--;
    
    printf("Array after deletion: \n");
    for (i = 0 ; i< n; i++){
        printf("%d " , arr[i]);
    }

    printf("\n");
    return 0;

 }
