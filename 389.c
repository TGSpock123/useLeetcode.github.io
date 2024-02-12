#include <stdio.h>
#include <string.h>
int cmp_min (char * str, int j);
char findTheDifference (char * s, char * t);
int main (void)
{
    char str1[6] = {'a', 'e', 'i', 'o', 'u', '\0'};
    char str2[7] = {'e', 'o', 'a', 'q', 'i', 'u', '\0'};
    findTheDifference (str1, str2);
    return 0;
}
char findTheDifference (char * s, char * t)
{
    char c;
    int j, p;

    j = cmp_min (s, strlen (s));
    p = cmp_min (t, strlen (t));
    c = (char) (p - j);
    printf ("%c", c);

    return c;
}
int cmp_min (char * str, int j)
{
    int p = 0;
    char * ch;

    for (ch = str; *ch; ch ++)
    {
        p += (int)*ch;
    }

    return p;
}