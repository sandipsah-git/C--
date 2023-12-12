#include <stdio.h>
int sum(int);
int main()
{
    int n;
    printf("--------Direct Recursion --------\n");
    printf("Enter any number: ");
    scanf("%d", &n);
    printf("The sum of digits of %d is %d", n, sum(n));
    return 0;
}
int sum(int x)
{
    static int r, s = 0;
    if (x != 0)
    {
        r = x % 10;
        s = s + r;
        return sum(x / 10);
    }
    return s;
}