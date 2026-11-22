// 566. Reshape the Matrix  -- O(m*n) time, O(r*c) space
#include <stdlib.h>

int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c,
                    int* returnSize, int** returnColumnSizes) {
    int m = matSize;
    int n = matColSize[0];

    // Reshape not possible -> return the original matrix
    if (m * n != r * c) {
        *returnSize = m;
        *returnColumnSizes = (int*)malloc(m * sizeof(int));
        for (int i = 0; i < m; i++)
            (*returnColumnSizes)[i] = n;
        return mat;
    }

    *returnSize = r;
    *returnColumnSizes = (int*)malloc(r * sizeof(int));
    int** result = (int**)malloc(r * sizeof(int*));
    for (int i = 0; i < r; i++) {
        result[i] = (int*)malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }

    // Read in row-traversing order, write in row-traversing order
    for (int k = 0; k < m * n; k++)
        result[k / c][k % c] = mat[k / n][k % n];

    return result;
}
