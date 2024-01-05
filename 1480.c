#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int * runningSum(const int * nums, int numsSize, int * returnSize)
{
    int j, p = 0;
    //int ar[numsSize];
    int * ar = (int *)malloc(numsSize * sizeof(int));//这句是ai教的, 还没学到这.

    for (j = 0; j < numsSize; j ++)
    {
        p += nums[j];
        ar[j] = p;
    }
    *returnSize = numsSize;

    return ar;
}