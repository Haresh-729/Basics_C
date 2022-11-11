//Program Of C To Determine Number Of Digits In An Integer
//Created By Haresh Kurade, FW20CO002.

#include <stdio.h>

int
main ()
{
  int num, i = 0;

  printf ("Enter any number: ");
  scanf ("%d", &num);

  do
    {
      i++;

      num /= 10;
    }
  while (num != 0);

  printf ("Total digits: %d", i);

  return 0;
}
