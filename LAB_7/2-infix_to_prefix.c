// 2 - infix to prefix conversion

#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    return stack[top--];
}

int priority(char x)
{
    if (x == '(')
    {
        return 0;
    }
    if (x == '+' || x == '-')
    {
        return 1;
    }
    if (x == '*' || x == '/' || x == '%')
    {
        return 2;
    }
    if (x == '^')
    {
        return 3;
    }
    return -1;
}

int main()
{
    char exp[100], c, pre[100], temp[100], x;
    int i, j, len;

    printf("Enter Infix Expression: ");
    scanf("%s", exp);

    len = strlen(exp);
    j = 0;
    // Reverse the infix expression and replace '(' with ')' and vice versa
    for (i = len - 1; i >= 0; i--)
    {
        if (exp[i] == '(')
        {
            temp[j++] = ')';
        }
        else if (exp[i] == ')')
        {
            temp[j++] = '(';
        }
        else
        {
            temp[j++] = exp[i];
        }
    }

    temp[j] = '\0';

    i = 0, j = 0;

    while (temp[i] != '\0')
    {
        c = temp[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        {
            pre[j++] = c;
        }
        else if (c == '(')
        {
            push(c);
        }
        else if (c == ')')
        {
            x = pop();
            while (x != '(')
            {
                pre[j++] = x;
                x = pop();
            }
        }
        else
        {
            while (priority(stack[top]) > priority(c))
            {
                x = pop();
                pre[j++] = x;
            }
            push(c);
        }
        i++;
    }

    // Pop any remaining operators from the stack
    while (top != -1)
    {
        pre[j++] = pop();
    }

    pre[j] = '\0';

    printf("Postfix Expression is : %s", strrev(pre));

    return 0;
}
