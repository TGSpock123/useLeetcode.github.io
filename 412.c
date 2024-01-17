#define F "Fizz"
#define B "Buzz"
#define V "FizzBuzz"
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char * * fizzBuzz(int n, int * returnSize)
{
    int ar[n + 1];
    int j = 0;

    for (; j <= n; j ++)
    {
        if (j % 3 == 0)
        {
            if (j % 5 == 0)
            {
                ar[j] = -3;
            }else
            {
                ar[j] = -5;
            }
        }else if ((j % 5 == 0) && (j % 3 != 0))
        {
            ar [j] = -35;
        }else
        {
            ar [j] = j;
        }
    }
}