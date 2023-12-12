#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int i, strLength, *operandStack, topNum = -1, topOpr = -1, result;
char *operatorStack;

void pushNum(int value)
{
    operandStack[++topNum] = value;
}

void pushOpr(char value)
{
    operatorStack[++topOpr] = value;
}

int popNum()
{
    return operandStack[topNum--];
}

char popOpr()
{
    return operatorStack[topOpr--];
}
int precedence(char ch)
{
    switch (ch)
    {
    case '(':
        return 0;
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default:
        printf("The precedence of %c is not allocated.", ch);
        return 0;
    }
}
int operate(int a, int b, char ch)
{
    switch (ch)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '^':
        return pow(a, b);
    default:
        printf("The operator %c is not placed in program.", ch);
        return 0;
    }
}
void simplify()
{
    int num2 = popNum();
    int num1 = popNum();
    char opr = popOpr();
    int result;
    if ((opr != '(') && (opr != ')'))
    {
        result = operate(num1, num2, opr);
        pushNum(result);
    }
}
int main()
{
    char infix[100];
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    int strLength = strlen(infix);
    if (infix[strLength - 1] == '\n')
    {
        infix[strLength - 1] = '\0'; // Remove the newline character
        strLength--;                 // Update the string length
    }

    operandStack = (int *)malloc(sizeof(int) * strLength);
    operatorStack = (char *)malloc(sizeof(char) * strLength);

    for (i = 0; i < strLength; i++)
    {
        if (infix[i] >= '0' && infix[i] <= '9')
        {
            int num = infix[i] - '0';
            pushNum(num);
        }
        else if (infix[i] == '(')
        {
            pushOpr(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (topOpr != -1 && operatorStack[topOpr] != '(')
            {
                simplify();
            }
            popOpr(); // Discard the '(' from the operator stack
        }
        else
        {
            while (topOpr != -1 && precedence(infix[i]) <= precedence(operatorStack[topOpr]))
            {
                simplify();
            }
            pushOpr(infix[i]);
        }
    }
    while (topOpr != -1)
    {
        simplify();
    }
    result = popNum();
    printf("The result of the given infix expression %s is %d\n",infix,result);

    free(operandStack);
    free(operatorStack);
    return 0;
}