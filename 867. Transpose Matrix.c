// 867. Transpose Matrix  -- O(m*n) time, O(m*n) space
#include <stdlib.h>

int** transpose(int** matrix, int matrixSize, int* matrixColSize,
                int* returnSize, int** returnColumnSizes) {
    int m = matrixSize;          // rows
    int n = matrixColSize[0];    // columns

    *returnSize = n;             // transposed has n rows
    *returnColumnSizes = (int*)malloc(n * sizeof(int));

    int** result = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        result[i] = (int*)malloc(m * sizeof(int));   // each new row has m columns
        (*returnColumnSizes)[i] = m;
    }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            result[j][i] = matrix[i][j];

    return result;
}
