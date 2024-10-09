#include <stdio.h>
int isFibonacci(int num)
{
    int t1 = 0, t2 = 1, nextTerm;

    while (nextTerm <= num)
    {
        if (nextTerm == num)
        {
            return 1; // The number is part of the Fibonacci series
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0; // The number is not part of the Fibonacci series
}

int main()
{
    int num;
    printf("Enter the 1st number: ");
    scanf("%d", &num);

    if (isFibonacci(num)==1)
    {
        printf("%d is part of the Fibonacci series.\n", num);
    }
    else
    {
        printf("%d is NOT part of the Fibonacci series.\n", num);
    }

    return 0;
}
