#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *link;
};

struct node *top;
void insert(int x)
{
	struct node *new_node = (struct node *)malloc(sizeof(struct node *));
	new_node->info = x;
	if (top == NULL)
	{
		new_node->link = NULL;
		top = new_node;
	}
	else
	{
		new_node->link = top;
		top = new_node;
	}
}

void delete()
{
	struct node *save;
	if (top == NULL)
	{
		printf("\nStack Underflow.!");
		return;
	}
	save = top;
	top = top->link;
	printf("\nDeleted Element is: %d", save->info);
	free(save);
}

void display()
{
	struct node *save;
	if (top == NULL)
	{
		printf("\nStack Underflow.!");
		return;
	}
	save = top;
	while (save != NULL)
	{
		printf("%d ", save->info);
		save = save->link;
	}
}

int main()
{
	int choice, x;
	while (1)
	{
		system("cls");
		printf("========== Stack Using Linked List ==========\n");
		printf("\n1. Insert Into Stack\n2. Delete From Stack\n3. Display\n0. Exit.!");
		printf("\n\nEnter Your Choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\n---------- Insert Into Stack ----------\n");
			printf("\nEnter Element to Insert: ");
			scanf("%d", &x);
			insert(x);
			printf("\n-----------------------------------------");
			getch();
			break;

		case 2:
			printf("\n---------- Deleted Nodes ----------\n\n");
			delete ();
			printf("--------------------");
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
