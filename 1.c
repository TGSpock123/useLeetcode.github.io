/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int * twoSum(int * nums, int numsSize, int target, int * returnSize)
{
    int * retur = (int*)malloc(2 * sizeof(int));//这句是抄的,我还没学到这.

    for (int i = 0; i < numsSize - 1; i ++)
    {
        for (int j = i + 1; j < numsSize; j ++)
        {
            if (nums[i] + nums[j] == target)
            {
                *returnSize = 2;
                retur[0] = i;
                retur[1] = j;
                return retur;
            }
        }
    }
    *returnSize = 0;
    free (retur);//这句也是.
    return NULL;
}
