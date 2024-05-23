int * search_core (int * left, int * right, int cop);

int search (int * nums, int numsize, int target)
{
  int * left = nums, * right = nums + numsize - 1;
  int * ret;

  ret = search_core (left, right, target);

  return (ret) ? (ret - left) : (-1);
}
int * search_core (int * left, int * right, int cop)
{
  int * mid = left + (right - left) / 2;

  if (left > right)
  {
    return NULL;
  }

  if (cop == *mid)
  {
    return mid;
  }

  return (cop > *mid) ? (search_core (mid + 1, right, cop)) : (search_core (left, mid - 1, cop));
}
