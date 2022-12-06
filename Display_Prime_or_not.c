// Program Of C To Determine The Number is Prime Or not
// Created By Haresh Kurade, FW20CO002.

#include <stdio.h>

int main()
{
    int n, i, b = 0;

    printf("Enter a positive Number: ");

    scanf("%d", &n);

    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            b = 1;
        }
    }

    if (n == 1)
    {
        printf("1 is neither prime nor composite.");
    }

    else
    {
        if (b == 0)
            printf("%d is a prime number.", n);

        else
            printf("%d is not a prime number.", n);
    }

    return 0;
}