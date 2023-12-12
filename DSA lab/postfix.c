/*
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
    int i, res, len, op1, op2, value[100];
    char prefix[100], ch;
    printf("Enter a valid postfix: ");
    gets(prefix);
    len = strlen(prefix);
    for (i = 0; i <len; i++)
    {
        if (isalpha(prefix[i]))
        {
            printf("Enter value of %c: ", prefix[i]);
            scanf("%d", &value[i]);
            push(value[i]);
        }
        else
        {
            ch = prefix[i];
            op2 = pop();
            op1 = pop();
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
    printf("The result is ");
    res = pop();
    printf("%d", res);
    return 0;
}
void push(int val)
{
    vstack[++tos] = val;
}
int pop(void)
{
    int n;
    n = vstack[tos--];
    return (n);
}*/
#include<math.h>
#include<stdio.h>
#include<ctype.h>
int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char postfix[20];
    char *e;
    int n1,n2,n3,num;
    printf("--------Postfix Expression Evaluation------\n");
    printf("Enter a valid postfix expression : ");
    scanf("%s",postfix);
    e = postfix;
    while(*e != '\0')
    {
        if(isdigit(*e))
        {
            num = *e - 48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch(*e)
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            case '^':
                n3=pow(n2,n1);
            }
            push(n3);
        }
        e++;
    }
    printf("\nThe result of the given postfix expression %s  =  %d\n\n",postfix,pop());
    return 0;
}