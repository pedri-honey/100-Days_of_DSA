#include <stdio.h>
int main() {
    int i, n, k ,count=0;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array.\n");
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the search key :\n");
    scanf("%d",&k);

    for(i = 0; i < n; i++){
        count++;
        if (arr[i] == k){
            printf("Element found at the index of %d\n",i) ;
            break;
        }
    }

    if(i == n )
    printf("Element not found.\n");

    printf("Comparisons = %d\n", count);
    
    return 0;
}