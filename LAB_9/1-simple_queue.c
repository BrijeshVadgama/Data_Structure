// 1. enqueue and dequeue using simple queue

#include <stdio.h>
#define N 5
int Q[N];
int F = -1, R = -1;

void enqueue(int x)
{
	if (R >= N - 1)
	{
		printf("Overflow.!");
	}
	else
	{
		R++;
		Q[R] = x;
		if (F == -1)
		{
			F = 0;
		}
	}
}

int dequeue()
{
	int y;
	if (F == -1)
	{
		return -1;
	}
	else
	{
		y = Q[F];
		if (F == R)
		{
			F = R = -1;
		}
		else
		{
			F++;
		}
	}
	return y;
}

void display()
{
	int i;
	if (F == -1)
	{
		printf("Underflow.!");
	}
	else
	{
		for (i = F; i <= R; i++)
		{
			printf("%d\t", Q[i]);
		}
	}
}

int main()
{
	int ch, x, y;
	printf("----------Menu----------\n");
	printf("1.Enqueue\n2.Dequeue\n3.Display\nPress -1 to Exit");
	printf("\nEnter Your Choice: ");
	scanf("%d", &ch);
	while (ch != -1)
	{
		switch (ch)
		{
		case 1:
			printf("Enter a Number: ");
			scanf("%d", &x);
			enqueue(x);
			break;

		case 2:
			y = dequeue();
			if (y == -1)
			{
				printf("Underflow.!");
			}
			else
			{
				printf("Dequeued Element is %d", y);
			}
			break;

		case 3:
			display();
			break;

		default:
			printf("\nInvalid Choice");
			break;
		}
		printf("\nEnter Your Choice: ");
		scanf("%d", &ch);
	}
	return 0;
}