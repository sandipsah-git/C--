#include <stdio.h>
#include <stdbool.h>
#define n 5
int stack[n];
int top = -1; // stack is empty

bool isfull()
{
    return top == n - 1; // stack is full
}
bool isempty()
{
    return top == -1; // stack is empty
}
void push(int data)
{
    if (!isfull())
    {
        top += 1;
        stack[top] = data;
    }
    else
    {
        printf("stack is full\n");
    }
}
int pop()
{
    if (!isempty())
    {
        int data = stack[top];
        top--;
        return data;
    }

    else
    {
        printf("stack is empty\n");
        return -1;
    }
}
void display()
{
    printf("Data in the stack are:\n");
    for (int i = 0; i <= top; i++)
    {
        printf("%d\n", stack[i]);
    }
}
int main()
{
    push(5);
    push(10);
    push(15);
    display();
    printf("Performing pop operation:\n");
    int x=pop();
    printf("Deleted data=%d\n",x);
    printf("After deletion: \n");
    display();
    return 0;
}