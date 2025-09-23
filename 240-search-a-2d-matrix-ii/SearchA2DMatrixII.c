bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    
    int row = matrixSize - 1;
    int col = 0;
    
    while (row >= 0 && col < *matrixColSize){
        if (matrix[row][col] > target) row--;
        else if (matrix[row][col] < target) col++;
        else return true;
    }
    return false;
}
