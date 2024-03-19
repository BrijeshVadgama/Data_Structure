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
    char post[100];
    int num, op1, op2, i, s;
    printf("Enter String: ");
    scanf("%s", post);
    i = 0;

    while (post[i] != '\0')
    {
        s = post[i];

        if (s >= '0' && s <= '9')
        {
            // Read and convert multi-digit number
            num = 0;
            while (post[i] >= '0' && post[i] <= '9')
            {
                num = num * 10 + (post[i] - '0');
                i++;
            }
            push(num);
        }
        else if (s == ',')
        {
            i++;
        }
        else
        {
            op2 = pop();
            op1 = pop();
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
            i++;
        }
    }

    printf("Ans = %d", pop());
    return 0;
}
