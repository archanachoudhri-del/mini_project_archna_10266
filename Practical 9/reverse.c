#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     
    printf("\nReversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
     
    int max = arr[0], min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("\n\nMaximum element: %d", max);
    printf("\nMinimum element: %d", min);
    
    int sumEven = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            sumEven += arr[i];
    }
    printf("\nSum of even elements: %d\n", sumEven);
    
    return 0;

}
// ARCHNA CHOUDHRI 10266
// Enter number of elements: 5 
// Enter 5 elements:
// 1 2 3 4 5

// Reversed array:
// 5 4 3 2 1

// Maximum element: 5
// Minimum element: 1
// Sum of even elements: 6

