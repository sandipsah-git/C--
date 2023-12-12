#include<stdio.h>
#include<ctype.h>
#include <math.h>
#include <string.h>

void push(int);
int pop();
int vstack[100];
int tos = -1;

int main()
{
    int i, res, len, op1, op2, value;
    char prefix[100], ch;
    printf("-------Prefix Expression Evaluation -------\n");
    printf("Enter a valid prefix: ");
    scanf("%s", &prefix);
    len = strlen(prefix);
    for (i = len - 1; i >= 0; i--)
    {
        if (isdigit(prefix[i]))
        {
            value=prefix[i]-'0';
            push(value);
        }
        else
        {
            ch = prefix[i];
            op1 = pop();
            op2 = pop();
            switch (ch)
            {
            case '+':
                push(op1 + op2);
                break;
            case '-':
                push(op1 - op2);
                break;
            case '*':
                push(op1 * op2);
                break;
            case '/':
                push(op1 / op2);
                break;
            case '^':
                push(pow(op1, op2));
                break;
            case '%':
                push(op1 % op2);
                break;
            }
        }
    }
    printf("The result is %d",pop());
    return 0;
}
void push(int val)
{
    vstack[++tos] = val;
}
int pop(void)
{
    return vstack[tos--];
}


/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int i, strLength, *valueStack, top = -1, result;
char prefix[100];
void push(int value)
{
    if (top == 99)
    {
        printf("Error: Stack overflow.\n");
    }
    else
    {
        valueStack[++top] = value;
    }
}
int pop()
{
    if (top == -1)
    {
        printf("Error: Stack underflow.\n");
    }
    else
    {
        return valueStack[top--];
    }
}
void operate(int a, int b, char ch)
{
    switch (ch)
    {
    case '+':
        push(a + b);
        break;
    case '-':
        push(a - b);
        break;
    case '*':
        push(a * b);
        break;
    case '/':
        push(a / b);
        break;
    case '^':
        push(pow(a, b));
        break;
    case '%':
        push(a % b);
        break;
    default:
        printf("The operator %c is not placed in program.", ch);
    }
}
int main()
{
    system("color f0");
    char choice;
    printf("---DSA-Lab-6---\n");
    do
    {
        printf("Enter the prefix expression: ");
        scanf("%s", prefix);
        int strLength = strlen(prefix);
        if (prefix[strLength - 1] == '\n')
        {
            prefix[--strLength] = '\0';
        }
        strLength = strlen(prefix);
        valueStack = (int *)malloc(sizeof(int) * strLength);
        for (i = strLength - 1; i >= 0; i--)
        {
            if (prefix[i] >= '0' && prefix[i] <= '9')
            {
                int num = prefix[i] - '0';
                push(num);
            }
            else if (prefix[i] == '+' || prefix[i] == '-' || prefix[i] == '*' || prefix[i] == '/' || prefix[i] == '^' || prefix[i] == '%')
            {
                char opr = prefix[i];
                int num1 = pop();
                int num2 = pop();
                operate(num1, num2, opr);
            }
            else
            {
                printf("\nInvalid prefix expression.\n");
            }
        }
        result = pop();
        printf("Solution: %d\n", result);
        free(valueStack);
        printf("\nDo you want to solve next prefix expression too? [y/n] : ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("\nProgram by Ningsang Jabegu, 28198/078.");
    return 0;
}
*/