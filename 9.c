/*#include <stdio.h>
int isPalindrome(int x);
int main (void)
{
    int o;
    scanf ("%d", &o);
    printf ("%d\n", isPalindrome(o));
    return 0;
}
int isPalindrome(int x)
{
    int j = 0, p = x, i = 0;

    if (x >= 10)
    {
        p = x;
        while (p > 9)
        {
            p /= 10;
            j ++;
        }
        printf ("%d\n", j);
        int ar1[j + 1], ar2[j + 1];
        i = j + 1;
        for (p = 0; p < i; p ++, j --)
        {
            ar1[p] = x % 10;
            ar2[j] = x % 10;
            x /= 10;
            printf ("%d\n", j);
        }
        while (j < i)
        {
            printf("%d", ar1[j]);
            printf("%d\n", ar2[j]);
            if (ar1[j] != ar2[j])
            {
                return 0;
            }
            j ++;
        }
        return 1;
    }else if (x < 0)
    {
        return 0;
    }else
    {
        return 1;
    }
}
*/
#include <stdio.h>

int isPalindrome(int x);

int main(void) {
    int o;
    scanf("%d", &o);
    printf("%d\n", isPalindrome(o));
    return 0;
}

int isPalindrome(int x) {
    if (x < 0) {
        return 0; // 负数不是回文数
    }

    int reversed = 0;
    int original = x;

    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return original == reversed;
}

