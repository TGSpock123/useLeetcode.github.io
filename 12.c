#include <string.h>
char * intToRoman(int num)
{
    int j, p = num;
    char one[10];
    char ten[10];
    char hun[10];
    /*char thu[20];*/
    char *thu = (char *)malloc(20 * sizeof(char));

    j = devi (&p, 1000);
    for (int i = 0; i < j; i ++)
    {
        thu[i] = 'M';
    }
    thu[j] = '\0';
    j = devi (&p, 100);
    msat (j, hun, 'M', 'D', 'C');
    strcat (thu, hun);
    j = devi (&p, 10);
    msat (j, ten, 'C', 'L', 'X');
    strcat (thu, ten);
    j = devi (&p, 1);
    msat (j, one, 'X', 'V', 'I');
    strcat (thu, one);

    return thu;
}
int devi (int * p, int mun)//除数和被除数
{
    int j, temp = *p;

    *p = *p % mun;
    j = temp / mun;

    return j;
}
void msat (int j, char * ar, char x, char d, char c)
{
    switch (j)
    {
        case 9:
            ar[0] = c;
            ar[1] = x;
            ar[2] = '\0';
            break;
        case 8:
        case 7:
        case 6:
        case 5:
            ar[0] = d;
            for (int i = 0; i < j - 5; i ++)
            {
                ar[i + 1] = c;
            }
            ar[j - 4] = '\0';
            break;
        case 4:
            ar[0] = c;
            ar[1] = d;
            ar[2] = '\0';
            break;
        default:
            for (int i = 0; i < j; i ++)
            {
                ar[i] = c;
            }
            ar[j] = '\0';
            break;
    }
}