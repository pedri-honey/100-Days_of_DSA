#include<stdio.h>


int main() {
    int i, pos, ele, n;
    printf("Enter the size of array:\n");
    scanf("%d", &n);

    int arr[n+1];
    printf("Enter the elements:\n");
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the postion:\n");
    scanf("%d", &pos);

    printf("Enter the Element:\n");
    scanf("%d", &ele);

    for(i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = ele;
    n++;

    printf("final array:\n"); 
    for(i=0; i<n; i++) {
        printf("%d " , arr[i]);
    }

    printf("\n");
    return 0;

}