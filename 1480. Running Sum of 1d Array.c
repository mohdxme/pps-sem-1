// 1480. Running Sum of 1d Array  -- O(n) time, O(n) space
#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
        result[i] = sum;
    }
    return result;
}
