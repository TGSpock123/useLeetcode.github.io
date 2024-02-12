#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char * mergeAlternately (const char * word1, const char * word2)
{
    char * asd = (char *)malloc(strlen (word1) + strlen (word2) + 2);
    const char * ch1, * ch2;
    unsigned long int j = strlen (word1), p = strlen (word2);

    ch1 = word1;
    ch2 = word2;
    for (unsigned long int i = 0; i <= j && i <= p; i ++)
    {
        asd[2 * i] = *(ch1 + i);
        asd[2 * i + 1] = *(ch2 + i);
    }
    if (j > p)
    {
        for (unsigned long int i = 0; i <= j - p; i ++)
        {
            asd[2 * p + i] = *(ch1 + p + i);
        }
    }else if (j < p)
    {
        for (unsigned long int i = 0; i <= p - j; i ++)
        {
            asd[2 * j + i] = *(ch2 + j + i);
        }
    }else;
    asd[strlen (word1) + strlen (word2)] = '\0';

    return asd;
}