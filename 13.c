#include <string.h>
int romanToInt(char * s)
{
    int j = 0, p = strlen (s);
    char c, v;

    for (int i = 0; i < p; i ++)
    {
        switch (s[i])
        {
            case 'M':
                j += 1000;
                break;
            case 'D':
                j += 500;
                break;
            case 'C':
                if (s[i + 1] != 'M' && s[i + 1] != 'D')
                {
                    j += 100;
                }else
                {
                    j -= 100;
                }
                break;
            case 'L':
                j += 50;
                break;
            case 'X':
                if (s[i + 1] != 'C' && s[i + 1] != 'L')
                {
                    j += 10;
                }else
                {
                    j -= 10;
                }
                break;
            case 'V':
                j += 5;
                break;
            case 'I':
                if (s[i + 1] != 'X' && s[i + 1] != 'V')
                {
                    j += 1;
                }else
                {
                    j -= 1;
                }
                break;
        }
    }

    return j;
}