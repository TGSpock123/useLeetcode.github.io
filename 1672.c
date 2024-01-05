int maximumWealth (int * * accounts, int accountsSize, int * accountsColSize)
{
    int j = accountsSize;
    int p = *accountsColSize;
    int temp = 0;
    int ar[j];

    for (int ze = 0; ze < j; ze ++)
    {
        ar[ze] = 0;
    }
    for (int k = 0; k < j; k ++)
    {
        for (int l = 0; l < p; l ++)
        {
            ar[k] += accounts[k][l];
        }
        if (temp < ar[k])
        {
            temp = ar[k];
        }
    }

    return temp;
}