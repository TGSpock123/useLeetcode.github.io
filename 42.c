#include <stdio.h>
int trap (int * height, int heightSize);

int main (void)
{
  int height[] = {0, 2, 0};

  printf ("%d\n", trap (height, sizeof (height) / sizeof (int)));
  return 0;
}

int trap (int * height, int heightSize)
{
  int j1 = 0, p1[] = {*height, 0, 0};

  if (heightSize <= 2)
  {
    return 0;
  }

  for (int p = 0, * j = height; p < heightSize; p ++)
  {
    if (*(j + p) > p1[0])
    {
      p1[0] = *(j + p);
      p1[1] = p;
    }
  }

  for (int p = heightSize - 1, * j = &height[heightSize - 1]; p >= 0; p --, j --)
  {
    if (*j == p1[0])
    {
      p1[2] = p;
      break;
    }
  }

  if (p1[1] != p1[2])
  {
    j1 += (p1[2] - p1[1]) * p1[0];
    for (int * j = height + p1[1]; j < height + p1[2]; j ++)
    {
      j1 -= *j;
    }
  }


  for (int * j = height, * p = j; p < height + p1[1]; p ++)
  {
    if (*p >= *j)
    {
      j = p;
    }else
    {
      j1 += *j - *p;
    }
  }

  for (int * j = &height[heightSize - 1], * p = j; p > height + p1[2]; p --)
  {
    if (*p >= *j)
    {
      j = p;
    }else
    {
      j1 += *j - *p;
    }
  }

  return j1;
}
