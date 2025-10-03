#include <stdbool.h>

bool binarySearch(int* row, int cols, int target) {
    int left = 0, right = cols - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (row[mid] == target) {
            return true;
        } else if (row[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return false;
}

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if (matrixSize == 0 || matrixColSize[0] == 0) {
        return false;
    }

    int rows = matrixSize;
    int cols = matrixColSize[0];
    
    if (target < matrix[0][0] || target > matrix[rows - 1][cols - 1]) {
        return false;
    }

    int top = 0, bottom = rows - 1;
    
    while (top <= bottom) {
        int mid = top + (bottom - top) / 2;

        if (target >= matrix[mid][0] && target <= matrix[mid][cols - 1]) {
            if (target == matrix[mid][0] || target == matrix[mid][cols - 1]) {
                return true;
            }
            return binarySearch(matrix[mid], cols, target);
        } else if (target < matrix[mid][0]) {
            bottom = mid - 1;
        } else {
            top = mid + 1;
        }
    }

    return false;
}
