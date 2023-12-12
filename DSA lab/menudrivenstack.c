#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define n 100
int stack[n], top = -1;

void push();
int pop(void);
void display(void);
bool isfull()
{
    return top == n - 1;
}
bool isempty()
{
    return top == -1;
}

int main()
{
    int choice = 0;
    do
    {
        printf("Select the operation you want to perform:\n ");
        printf("Press 1 for push:\n ");
        printf("Press 2 for pop:\n ");
        printf("Press 3 for display:\n ");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting program!!");
            exit(1);
        default:
            printf("Invalid choice,Please renter a valid choice:\n ");
        }
    } while (choice != 4);
    return 0;
}
void push()
{
    int val;
    if (!isfull())
    {
        printf("Enter the value:");
        scanf("%d", &val);
        stack[++top] = val;
    }
    else
    {
        printf("Stack is full!");
    }
}
int pop()
{
    int val;
    if (!isempty())
    {
        val = stack[top--];
        return val;
    }
    else
    {
        printf("Stack is empty!");
        return -1;
    }
}
void display()
{
    printf("The elements of the stack are:\n ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
    if (isempty())
    {
        printf("Stack is empty!");
    }
}