// gcd using recursion
#include <stdio.h>
int gcdEuclid(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcdEuclid(b, a % b);
}
int main()
{
    int n1, n2;
    printf("--------GCD using Recursion--------\n"); 
    printf("enter any two numbers: \n");
    scanf("%d%d", &n1, &n2);
    printf("The gcd of %d and %d is %d", n1, n2, gcdEuclid(n1, n2));
    return 0;
}