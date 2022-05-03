#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    int u=0,v=0,fibo=0;

    if(n==0 || n==1)
    {
        fibo=1;
        return fibo;
    }

    u=1;
    v=1;

    while(n>=2)
    {
        fibo=u+v;
        u=v;
        v=fibo;
        n=n-1;
    }
    return fibo;
}

int fibonacci_recursive(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return fibonacci_recursive(n-1)+fibonacci_recursive(n-2);
}

int main()
{
    int i=0;
    printf("Welcome to Fibonacci world!\n");
    do
    {
        printf("Enter the integer representing the position of the Fibonacci number(not less than 0)\n");
        scanf("%d",&i);
    }while(i<0);

    printf("\n");
    printf("Result of the recursive Fibonacci:%d",fibonacci_recursive(i));
    printf("\n");
    printf("Result of the non recursive Fibonacci:%d",fibonacci(i));

    return 0;
}
