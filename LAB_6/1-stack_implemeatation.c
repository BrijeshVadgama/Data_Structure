// stack implementation

#include <stdio.h>
#define N 5
int top = -1, stack[N];
void push(int x)
{
    if (top >= N - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
        printf("Element Inserted\n");
    }
}
int pop()
{
    if (top == -1)
    {
        return -1;
    }
    else
    {
        top--;
        return stack[top + 1];
    }
}
int peep(int i)
{
    if (top - i + 1 <= -1)
    {
        return -1;
    }
    else
    {
        return stack[top - i + 1];
    }
}
void change(int i, int x)
{
    if (top - i + 1 <= -1)
    {
        printf("ith element is not available\n");
    }
    else
    {
        stack[top - i + 1] = x;
    }
}
void display()
{
    int i;
    if (top <= -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
int main()
{
    int ch, x, y, i;
    printf("---------- Menu ---------");
    printf("\n1.PUSH\n2.POP\n3.PEEP\n4.CHANGE\n5.DISPLAY\nPress -1 to Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d", &ch);
    while (ch != -1)
    {
        switch (ch)
        {
        case 1:
            printf("\nEnter Element: ");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            y = pop();
            if (y == -1)
            {
                printf("Stack is Underflow\n");
            }
            else
            {
                printf("Popped Element is %d\n", y);
            }
            break;
        case 3:
            printf("\nEnter i: ");
            scanf("%d", &i);
            y = peep(i);
            if (y == -1)
            {
                printf("ith Element is Not Available\n");
            }
            else
            {
                printf("ith Element is %d\n", y);
            }
            break;
        case 4:
            printf("\nEnter i: ");
            scanf("%d", &i);
            printf("Enter x: ");
            scanf("%d", &x);
            change(i, x);
            break;
        case 5:
            display();
            break;
        default:
            printf("\n----------------------");
            printf("\nInvalid Choice\n");
            printf("----------------------\n");
            break;
        }
        printf("\nEnter Your Choice: ");
        scanf("%d", &ch);
    }
    return 0;
}