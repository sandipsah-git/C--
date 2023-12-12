#include <stdio.h>
int fact(int n, int acc)
{
    if (n == 0)
    {
        return acc;
    }
    else
        return fact(n - 1, n * acc);
}
int factorial(int n)
{
    return fact(n, 1);
}
int main(){
    int num,f;
    printf("-------Tail Recursion-------\n");
    printf("Enter any number: ");
    scanf("%d",&num);
    f=factorial(num);
    printf("Factorial of %d is %d\n",num,f);
    return 0;   
}