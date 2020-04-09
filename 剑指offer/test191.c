/* 遇到转角就拐弯, 矩阵大小逐渐收缩 */ 
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    if (matrixSize == 0 || matrixColSize[0] == 0) {
        *returnSize = 0;
        return NULL;
    }
    int m = matrixSize;
    int n = *matrixColSize;
    int left  = 0;
    int right = n - 1;
    int up    = 0;
    int down  = m - 1;
    int *res = (int*)malloc(sizeof(int) * m * n);
    int idx  = 0;
    int i;
    /* 分上, 右, 下, 左进行矩阵遍历 */
    while (left <= right && up <= down) {
        for (i = left; i <= right; i++) {
            res[idx++] = matrix[up][i];
        }
        up++;
        for (i = up; i <= down; i++) {
            res[idx++] = matrix[i][right];
        }
        right--;
        for (i = right; i >= left && up <= down; i--) {
            res[idx++] = matrix[down][i];
        }
        down--;
        for (i = down; i >= up && left <= right; i--) {
            res[idx++] = matrix[i][left];
        }
        left++;
    }
    *returnSize = idx;
    return res;
}