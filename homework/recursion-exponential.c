#include <cs50.h>
#include <stdio.h>

int expo(int, int);

int main(void)
{
int num1 = get_int("Number: ");
int num2 = get_int("Power: ");
int result = expo(num1, num2);
printf("Result: %i\n", result);
}

int expo(int num1, int num2)
{
    if(num2 == 0)

     return 1;

    else if(num2 == 1)

        return num1;
    else
    {

    return (num1 * (expo(num1, num2 - 1)));
    }
}