#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    // Dynamically allocate memory using calloc()
    ptr = (int *)calloc(n, sizeof(int));
    // Check if the memory has been successfully
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
        printf("Memory successfully allocated using calloc.\n");
    for (i = 0; i < n; ++i)
    {
        ptr[i] = i + 1;
    }
    // Print the elements of the array
    printf("The elements of the array are:\n");
    for (i = 0; i < n; ++i)
    {
        printf("%d\n", ptr[i]);
    }
    // Get the new size for the array
    printf("\nEnter the new size: ");
    scanf("%d", &n);
    // Dynamically re-allocate memory using realloc()
    ptr = realloc(ptr, n * sizeof(int));
    printf("Memory successfully re-allocated using realloc.\n");
    // Get the new elements of the array
    for (i = n; i > 0; i--)
    {
        ptr[i] = i + 2;
    }

    printf("The new elements of the array are:\n");
    for (i = n; i > 0; --i)
        printf("%d\n", ptr[i]);
    free(ptr);
    return 0;
}
