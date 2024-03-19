// prefix evalution

#include <stdio.h>
#include <string.h>

int stack[100];
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
    char pre[100];
    int num, op1, op2, i, s;
    printf("Enter Expression: ");
    scanf("%s", pre);
    strrev(pre);
    i = 0;
    while (pre[i] != '\0')
    {
        s = pre[i];
        if (s >= '0' && s <= '9')
        {
            num = s - '0'; // formula to convert string to number
            push(num);
        }
        else
        {
            op1 = pop();
            op2 = pop();
            if (s == '+')
            {
                push(op1 + op2);
            }
            else if (s == '-')
            {
                push(op1 - op2);
            }
            else if (s == '*')
            {
                push(op1 * op2);
            }
            else if (s == '/')
            {
                push(op1 / op2);
            }
            else if (s == '%')
            {
                push(op1 % op2);
            }
        }
        i++;
    }
    printf("Ans: %d", pop());
    return 0;
}