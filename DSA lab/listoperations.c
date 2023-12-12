#include <stdio.h>
#include <stdlib.h>
void create(int[100], int *);
void insert(int[100], int *);
void delete(int[100], int *);
void update(int[100], int *);
void traverse(int[100], int *);
void search(int[100], int *);
void sort(int[100], int *);
void merge(int[100], int[100], int *, int *);
int main()
{
    int a[100], b[100], n, m;
    int choice;
    printf("---------Menu Driven Program--------\n");
    printf("-------Array Implementation of List ------\n");
    printf("1.Create\n2.Insert\n3.Delete\n4.Modify\n5.Traverse\n6.Merge\n7.Search\n8.Sort\n");
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number of elements of your first list: ");
            scanf("%d", &n);
            create(a, &n);
            break;
        case 2:
            insert(a, &n);
            break;
        case 3:
            delete (a, &n);
            break;
        case 4:
            update(a, &n);
            break;
        case 5:
            traverse(a, &n);
            break;
        case 6:
            printf("Enter the size of the second list: ");
            scanf("%d", &m);
            merge(a, b, &n, &m);
            break;
        case 7:
            search(a, &n);
            break;
        case 8:
            sort(a, &n);
            break;
        case 9:
            printf("Exiting Program!");
            exit(1);
            break;
        default:
            printf("Invalid Choice!");
        }
    } while (choice < 10);
    return 0;
}
void create(int a[100], int *p)
{
    int i;
    printf("Enter %d elements:\n", *p);
    for (i = 0; i < *p; i++)
    {
        scanf("%d", &a[i]);
    }
}
void insert(int a[100], int *p)
{
    int pos, nel, i;
    printf("Enter the position at which your want to insert new element: ");
    scanf("%d", &pos);
    printf("Enter the new element: ");
    scanf("%d", &nel);
    for (i = *p - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = nel;
    *p = *p + 1;
}
void delete(int a[100], int *p)
{
    int pos, i;
    printf("Enter the position at which you want to delete an element: ");
    scanf("%d", &pos);
    for (i = pos; i < *p; i++)
    {
        a[i] = a[i + 1];
    }
    *p = *p - 1;
}
void update(int a[100], int *p)
{
    int pos, new, i;
    printf("Enter the position at which you want to modify the element: ");
    scanf("%d", &pos);
    printf("Enter the new element: ");
    scanf("%d", &new);
    a[pos] = new;
}
void traverse(int a[100], int *p)
{
    printf("The elements of the list are: \n");
    for (int i = 0; i < *p; i++)
    {
        printf("%d\t", a[i]);
    }
}
void search(int a[100], int *p)
{
    int i, key, flag = 0;
    printf("Enter the element you want to search: ");
    scanf("%d", &key);
    for (i = 0; i < *p; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Element %d is found at %d index", key, i);
    }
}
void merge(int a[100], int b[100], int *p, int *q)
{
    int i, j = *p;
    printf("Enter %d elements:\n", *q);
    for (i = 0; i < *q; i++)
    {
        scanf("%d", &b[i]);
        a[j] = b[i];
        j++;
        *p = *p + 1;
    }
}
void sort(int a[100], int *p)
{
    int i, j, temp;
    for (i = 0; i < *p; i++)
    {
        for (j = i + 1; j < *p; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}