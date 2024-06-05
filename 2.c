struct ListNode
{
  int val;
  struct ListNode * next;
};

struct ListNode * make_node (void)
{
  struct ListNode * node = (struct ListNode *) malloc (sizeof (struct ListNode));

  node -> next = NULL;
  node -> val = EOF;

  return node;
}

struct ListNode * addTwoNumbers (struct ListNode * l1, struct ListNode * l2)
{
  int j, p, j_plus_p;
  _Bool if_bigger = 0;
  struct ListNode * head1 = l1, * head2 = l2, * head3 = make_node (), * ret = head3;

  while (head1 || head2)
  {
    j = (head1) ? head1 -> val : 0;
    p = (head2) ? head2 -> val : 0;
    (if_bigger) ? (j_plus_p = 1, if_bigger = 0) : (j_plus_p = 0);
    j_plus_p += (j + p);

    if (j_plus_p >= 10)
    {
      if_bigger = 1;
    }

    (head3 -> val == EOF) ?
    (head3 -> val = j_plus_p % 10) :
    ({
      while (head3 -> next)
      {
        head3 = head3 -> next;
      }
      head3 -> next = make_node ();
      head3 -> next -> val = j_plus_p % 10;
    });

    if (head1)
    {
      head1 = head1 -> next;
    }
    if (head2)
    {
      head2 = head2 -> next;
    }
  }

  if (if_bigger)
  {
    while (head3 -> next)
    {
      head3 = head3 -> next;
    }
    head3 -> next = make_node ();
    head3 -> next -> val = 1;
  }

  return ret;
}
