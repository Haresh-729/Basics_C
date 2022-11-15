//Program Of C For Multiplication Table
//Created By Haresh Kurade, FW20CO002.
#include<stdio.h>
int
main ()
{
  int n, i;
  printf ("Enter An Number:");
  scanf ("%d", &n);

  for (i = 1; i <= 10; ++i)
    {
      printf ("%d*%d=%d\n", n, i, n * i);
    }

  return 0;
}
