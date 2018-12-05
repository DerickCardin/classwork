#include <cs50.h>
#include <stdio.h>

int fact(int); // declares function to call later in int main (cannot run that function unless previously declared outside of int main)
long long fib(int);

int main(void)
{
    //5!
    int result = fact(5); // to redeclare as a long long it would be long long result = fact()
    printf("5! = %i\n", result); // to redeclare as a long long %lld\n
    long long result2 = fib(40);
    printf("Fibbonacci position 60 = %lld\n", result2);
}

long long fib(int num)
{
    if (num <= 1)
    {
        return num;
    }
    return fib(num -1) + fib(num - 2);
}

int fact(int num) // to redeclare as long long it would be long long int fact(int num)
{
    if(num <= 1)
    {
        return num;
    }
    return num * fact(num - 1);
}