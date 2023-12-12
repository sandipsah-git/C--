#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    printf("Dynamic memory allocation using malloc\n");
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Memory allocation failure");
        exit(0);
    }
    else
    {
        printf("Memory allocated successfully\n");
        for (i = 0; i < n; i++)
        {
            p[i] = i + 1;
            printf("%d\n", p[i]);
        }
    }
    free(p);

    return 0;
}