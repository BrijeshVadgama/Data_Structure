// circular queue using linked list

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *link;
};

struct node *front, *rear;
void insert(int x)
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node *));
	new_node->info = x;
	if (front == NULL)
	{
		new_node->link = new_node;
		front = rear = new_node;
	}
	else
	{
		new_node->link = front;
		rear->link = new_node;
		rear = new_node;
	}
}

void delete()
{
	struct node *save;
	if (front == NULL)
	{
		printf("\nQueue Underflow.!\n");
		return;
	}
	save = front;
	if (front == rear)
	{
		front = rear = NULL;
	}
	else
	{
		front = front->link;
		rear->link = front;
	}
	printf("\n------------------------\n");
	printf("\nDeleted Element is: %d\n\n", save->info);
	free(save);
}

void display()
{
	struct node *save;
	save = front;
	if (front == NULL)
	{
		printf("\nQueue is Empty");
	}
	else
	{
		do
		{
			printf("%d ", save->info);
			save = save->link;
		} while (save != front);
	}
}

int main()
{
	int choice, x;
	while (1)
	{
		system("cls");
		printf("========== Queue Using Linked List ==========\n");
		printf("\n1. Insert Into Queue\n2. Delete From Queue\n3. Display\n0. Exit.!");
		printf("\n\nEnter Your Choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n---------- Insert Into Queue ----------\n");
			printf("\nEnter Element to Insert: ");
			scanf("%d", &x);
			insert(x);
			printf("\n-----------------------------------------");
			getch();
			break;

		case 2:
			delete ();
			printf("------------------------");
			getch();
			break;

		case 3:
			printf("\n---------- Display All Nodes ----------\n\n");
			display();
			printf("\n\n--------------------");
			getch();
			break;

		case 0:
			exit(0);
			break;

		default:
			printf("Invalid Choice.!");
			printf("\n\n--------------------");
			getch();
			break;
		}
	}
	return 0;
}
