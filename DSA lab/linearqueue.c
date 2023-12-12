/*
#include <stdio.h>
#include <stdlib.h>
#define size 20
struct Lqueue
{
    int rear;
    int front;
    int item[size];
};
typedef struct Lqueue qu;
void Enqueue(qu *);
void Dequeue(qu *);
void display(qu *);

int main()
{
    int choice = 0;
    qu *q;
    q->front = 0;
    q->rear = -1;
    printf("------Implementation of linear queue using static array------\n");
    printf("\nPress 1. for insertion\n");
    printf("Press 2. for insertion\n");
    printf("Press 3. for insertion\n");
    do
    {
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Enqueue(q);
            break;
        case 2:
            Dequeue(q);
            break;
        case 3:
            display(q);
            break;
        case 4:
            printf("Exiting program!\n");
            exit(1);
        default:
            printf("Invalid choice.Please select again.\n");
        }
    } while (choice < 5);

    return 0;
}
void Enqueue(qu *q)
{
    int x;
    printf("Enter the data your wish to insert into the queue:\n");
    scanf("%d\t", &x);
    if (q->rear == size - 1)
    {
        printf("Overflow condition\n");
    }
    else
    {
        q->rear += 1;
        q->item[q->rear] = x;
    }
}
void Dequeue(qu *q)
{
    if (q->rear < q->front)
    {
        printf("Underflow condition.\n");
    }
    else
    {
        printf("The deleted data is: %d\n", q->item[q->front]);
        q->front++;
    }
}
void display(qu *q)
{
    if (q->rear < q->front)
    {
        printf("Underflow condition.\n");
    }
    else
    {
        printf("The elements in the queue are: \n");
        for (int i = q->front; i < q->rear + 1; i++)
        {
            printf("%d\t", q->item[i]);
        }
    }
}
*/
// Linear Queue implementation in C
#include <stdlib.h>
#include <stdio.h>
#define SIZE 5

int items[SIZE];
int front = 0, rear = -1;

// Check if the queue is full
int isFull()
{
    if (rear == SIZE - 1)
        return 1;
    return 0;
}

// Check if the queue is empty
int isEmpty()
{
    if (rear < front)
        return 1;
    return 0;
}

// Adding an element
void enQueue()
{
    int x;
    printf("Enter the element you wish to add: ");
    scanf("%d", &x);
    if (isFull())
        printf("\n Queue is full!! \n");
    else
    {
        items[++rear] = x;
        printf("\n Inserted -> %d\n", x);
    }
}

// Removing an element
int deQueue()
{
    int x;
    if (isEmpty())
    {
        printf("\n Queue is empty !! \n");
        return -1;
    }
    else
    {
        x = items[front];
        front = front + 1;
        printf("\n Deleted element -> %d \n", x);
        return x;
    }
}

// Display the queue
void display()
{
    int i;
    if (isEmpty())
        printf(" \n Empty Queue\n");
    else
    {
        printf("\n Front -> %d ", front);
        printf("\n Queue elements -> ");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", items[i]);
        }
        printf("\n Rear -> %d \n", rear);
    }
}

int main()
{
    int ch;
    printf("----- Menu for Linear Queue program----- \n");
    printf(" 1.Enqueue\n 2.Dequeue\n 3.Display\n 4.exit\n");
    do
    {
        printf(" Enter your choice: ");
        scanf(" %d", &ch);
        switch (ch)
        {
        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting program!\n");
            exit(1);
            break;
        default:
            printf("Invalid choice!");
        }
    } while (ch < 5);
    return 0;
}