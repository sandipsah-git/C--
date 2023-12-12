#include <stdio.h>
int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}
int main()
{
    int a;
    printf("--------Factorial --------\n");
    printf("Enter any number: ");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, fact(a));
    return 0;
}