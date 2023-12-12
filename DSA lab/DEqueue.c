#include <stdio.h>
#define N 5
int DEque[N];
int front = -1, rear = -1;
void Enqueuefront(int x)
{
    if (front == (rear + 1) % N)
        printf("Queue is full\n");

    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        DEque[front] = x;
    }
    else if (front == 0)
    {
        front = N - 1;
        DEque[front] = x;
    }
    else
    {
        front--;
        DEque[front] = x;
    }
}
void Enqueuerear(int x)
{
    if (front == (rear + 1) % N)
    {
        printf("Queue is full\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        DEque[rear] = x;
    }
    else if (rear == N - 1)
    {
        rear = 0;
        DEque[rear] = x;
    }
    else
    {
        rear++;
        DEque[rear] = x;
    }
}
void display()
{
    int i = front;
    while (i != rear)
    {
        printf("%d\t", DEque[i]);
        i = (i + 1) % N;
    }
}
void getfront()
{
    printf("%d", DEque[front]);
}
void getrear()
{
    printf("%d", DEque[rear]);
}
void dequeuefront()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == N - 1)
    {
        printf("%d", DEque[front]);
        front = 0;
    }
    else
    {
        printf("%d", DEque[front]);
        front++;
    }
}
void dequeuerear()
{
    if (front == -1 && rear == -1)
        printf("Queue is empty\n");
    else if (front == rear)
    {
        front = rear = -1;
    }
    else if (rear == 0)
    {
        printf("%d", DEque[rear]);
        rear = N - 1;
    }
    else
    {
        printf("%d", DEque[rear]);
        rear--;
    }
}
int main()
{
    Enqueuerear(5);
    display();
    Enqueuefront(0);
    display();
    return 0;
}