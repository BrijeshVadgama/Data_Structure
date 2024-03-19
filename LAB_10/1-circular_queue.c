// 1. enqueue and dequeue using circular queue

#include <stdio.h>
#define N 3
int Q[N];
int F = -1, R = -1;

void enqueue(int x)
{
	if (R == N - 1)
	{
		R = 0;
	}
	else
	{
		R++;
	}

	if (F == R)
	{
		//			printf("Overflow.!");
		if (R == 0)
			R = N - 1;
		else
			R--;
	}
	else
	{
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
		else if (F == N)
		{
			F = 0;
		}
		else
		{
			F++;
		}
		return y;
	}
}

void display()
{
	int i;
	if (F <= R)
	{
		for (i = F; i <= R; i++)
		{
			printf("%d\t", Q[i]);
		}
	}
	else
	{
		for (i = F; i <= N - 1; i++)
		{
			printf("%d\t", Q[i]);
		}
		for (i = 0; i <= R; i++)
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
