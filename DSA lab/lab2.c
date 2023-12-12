#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, sum = 0;
    printf("Dynamic memory allocation using calloc\n");
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *p = (int *)calloc(n, sizeof(int));
    if (p == NULL)
    {
        printf("Memory allocation failure");
        exit(0);
    }
    else
    {
        printf("Memory allocated successfully\n");
        printf("The elements are: \n");
        for (i = 0; i < n; i++)
        {
            p[i] = i + 1;
            printf("%d\n", p[i]);
            sum=sum + p[i];
        }
        printf("The sum up to %d terms is: ", n);
        printf("%d", sum);
    }
    free(p);

    return 0;
}