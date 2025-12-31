  #include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

     
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

     
    int max = arr[0][0], min = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) max = arr[i][j];
            if (arr[i][j] < min) min = arr[i][j];
        }
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    
    if (rows == cols) {
        int primarySum = 0, secondarySum = 0;
        for (int i = 0; i < rows; i++) {
            primarySum += arr[i][i];                
            secondarySum += arr[i][rows - i - 1];  
        }
        printf("Primary diagonal sum: %d\n", primarySum);
        printf("Secondary diagonal sum: %d\n", secondarySum);
    } else {
        printf("Diagonal sums only valid for square matrix.\n");
    }
   
    printf("Row-wise sums:\n");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        printf("Row %d sum = %d\n", i + 1, rowSum);
    }

    return 0;
}
// Enter number of rows and columns: 3 3
// Enter elements of the array:
// 5 8 3
// 9 2 7
// 6 4 1
// Maximum element: 9
// Minimum element: 1
// Primary diagonal sum: 8
// Secondary diagonal sum: 14
// Row-wise sums:
// Row 1 sum = 16
// Row 2 sum = 18
// Row 3 sum = 11

