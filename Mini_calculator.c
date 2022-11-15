//program Of Operators and Operands
//Created By Haresh Kurade
#include <stdio.h>
int main() 
{
    char operator;
    double num1, num2;
    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) 
    {
    case '+':
        printf("%f + %f = %f", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%f - %f = %f", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%f * %f = %f", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%f / %f = %f", num1, num2, num1 / num2);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}