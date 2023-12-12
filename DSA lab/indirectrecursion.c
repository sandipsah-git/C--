#include <stdio.h>
int factorial2(int);
int factorial1(int x);
int main()
{
    int n;
    printf("-------Indirect Recursion-------\n");
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, factorial1(n));
    return 0;
}
int factorial1(int x)
{
    if (x == 0)
        return 1;
    else
        return factorial2(x);
}
int factorial2(int y)
{
    return y * factorial1(y - 1);
}
