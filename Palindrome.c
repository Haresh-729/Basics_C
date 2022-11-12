//Program Of C To To Check Whether A Number Is Palindrome Or Not
//Created By Haresh Kurade, FW20CO002.
#include<stdio.h>
int
main ()
{
  int n, b = 0, rem, ori;
  printf ("Enter A number:");
  scanf ("%d", &n);
  ori = n;
  while (n != 0)
    {
      rem = n % 10;
      b = b * 10 + rem;
      n /= 10;
    }
  if (ori == b)
    printf ("%d Is A Palindrome.", ori);
  else
    printf ("%d Is Not A Palindrome.", ori);

  return 0;
}
