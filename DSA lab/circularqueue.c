// Circular Queue implementation in C
#include<stdlib.h>
#include <stdio.h>
#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

// Check if the queue is full
int isFull()
{
    if ((front == (rear + 1) % SIZE))
        return 1;
    return 0;
}

// Check if the queue is empty
int isEmpty()
{
    if (front == -1)
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
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = x;
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
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        // Q has only one element, so we reset the
        // queue after dequeing it. ?
        else
        {
            front = (front + 1) % SIZE;
        }
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
        for (i = front; i != rear; i = (i + 1) % SIZE) // since circular we use modulus division here
        {
            printf("%d ", items[i]);
        }
        printf("%d ", items[i]);
        printf("\n Rear -> %d \n", rear);
    }
}

int main()
{
    int ch;
    printf(" Menu for program: \n");
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