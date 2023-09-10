#include <stdio.h>
#include <stdlib.h>
typedef enum{
	false = 0,
	true
}bool;

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target);

int main() {
    // Example matrix
    int matrixRows = 3;
    int matrixCols = 4;
    int matrixData[][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
    };

    // Convert the matrix to int** representation
    int** matrix = (int**)malloc(matrixRows * sizeof(int*));
    for (int i = 0; i < matrixRows; i++) {
        matrix[i] = matrixData[i];
    }

    int target = 3;

    // Call the searchMatrix function
    bool found = searchMatrix(matrix, matrixRows, &matrixCols, target);

    // Print the result
    if (found) {
        printf("True");
    } else {
        printf("False");
    }

    // Free the dynamically allocated memory
    free(matrix);

    return 0;
}


bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if (matrix == NULL || matrixSize == 0 || *matrixColSize == 0) {
        return false;
    }

    int rows = matrixSize;
    int cols = *matrixColSize;

    int left = 0;
    int right = rows * cols - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midElement = matrix[mid / cols][mid % cols];

        if (midElement == target) {
            return true;
        } else if (midElement > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

return false;
}

