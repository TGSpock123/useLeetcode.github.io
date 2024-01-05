int numberOfSteps (int num)
{
    int j;

    for (j = 0; num > 0; j ++)
    {
        if (num % 2 == 0)
        {
            num /= 2;
        }else
        {
            num -= 1;
        }
    }

    return j;
}