#include<cs50.h>
#include<stdio.h>

int fib(int);


int main(void)
{
    int result = fib(8);
    printf("Fibbonacci position 8 = %i\n", result);
   }

int fib(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return fib(num -1) + fib(num - 2);
}