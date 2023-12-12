#include <stdlib.h>
#include <stdio.h>
#define N 5
void enqueue();
int dequeue();
void display();
int rear = -1, front = 0;
int pQueue[N];

int main()
{
    int ch;
    printf("------Menu Driven Program------\n");
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
    do
    {
        printf("\nEnter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;

        case 4:
            printf("Exiting program\n");
            exit(1);
            break;
        default:
            printf("Invalid choice\n");
        }
    } while (ch < 5);
    return 0;
}
void enqueue()
{
    int d;
    if (rear == N - 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        printf("Enter the data to be inserted:\n");
        scanf("%d", &d);
        pQueue[++rear] = d;
    }
}
int dequeue()
{
    int i, temp = 0, x;
    x = pQueue[front];
    if (rear < front)
    {
        printf("Queue is empty\n");
        return 0;
    }
    else
        for (i = front + 1; i < rear; i++)
        {
            if (x > pQueue[i])
            {
                temp = i;
                x = pQueue[i];
            }
        }
    printf("Deleted item= %d", x);
    for (i = temp; i < rear - 1; i++)
    {
        pQueue[i] = pQueue[i + 1];
    }
    rear--;
    return x;
}
void display()
{
    int i;
    if (rear < front)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements: \n");
        for (i = front; i <= rear; i++)
        {
            printf("%d\t", pQueue[i]);
        }
    }
}