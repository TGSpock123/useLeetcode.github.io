#include <string.h>
char into (char c);
bool isValid (char * s)
{
    bool a = true;
    char ar[strlen(s)]; //装估计的反括号情况
    int j = 0;

    for (int p = 0; p < strlen (s); p ++)
    {
        switch (s[p])
        {
            case '{':
            case '[':
            case '(':
                ar[j] = into (s[p]);
                j ++;
                break;
            case ')':
            case ']':
            case '}':
                j --;
                if (j < 0 || ar[j] != s[p])
                {
                    a = false;
                }
                break;
        }
        if (!a)
        {
            break;
        }
    }
    if (j != 0)
    {
        a = false;
    }

    return a;
}
char into (char c)
{
    char ch;

    if (c == '(')
    {
        ch = ')';
    }else if (c == '[')
    {
        ch = ']';
    }else
    {
        ch = '}';
    }

    return ch;
}