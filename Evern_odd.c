
//Program To Display The Num Is Odd Or Even
#include <stdio.h>

int main()
{
    int num;
    printf("Enter A Positive Number:");
    scanf("%d",&num);
    if(num%2==0)
        printf("The Number Entered Is Even");
    else
        printf("The Number Entered Is Odd");
    return 0;
}
