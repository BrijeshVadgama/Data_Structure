// doubly linked list implementation

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *lptr, *rptr;
};

struct node *L, *R;

void dou_ins_first(int x)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node *));
    new_node->info = x;
    if (L == NULL)
    {
        new_node->lptr = NULL;
        new_node->rptr = NULL;
        L = R = new_node;
    }
    else
    {
        new_node->lptr = NULL;
        new_node->rptr = L;
        L->lptr = new_node;
        L = new_node;
    }
}

void dou_ins_last(int x)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node *));
    new_node->info = x;
    if (L == NULL)
    {
        new_node->lptr = NULL;
        new_node->rptr = NULL;
        L = R = new_node;
    }
    else
    {
        new_node->rptr = NULL;
        new_node->lptr = R;
        R->rptr = new_node;
        R = new_node;
    }
}

void display()
{
    struct node *save;
    save = R;
    while (save != L)
    {
        printf("%d ", save->info);
        save = save->lptr;
    }
    printf("%d ", save->info);
}

int main()
{
    int choice, ele;
    while (1)
    {
        system("cls");
        printf("========== Doubly Linked List Menu ==========\n");
        printf("\n1. Insert Node At First\n2. Insert Node At Last\n3. Display\n0. Exit!");
        printf("\n\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n--------------- Insert Node At First ---------------\n");
            printf("\nEnter Element For First : ");
            scanf("%d", &ele);
            dou_ins_first(ele);
            printf("\n-----------------------------------");
            getch();
            break;

        case 2:
            printf("\n--------------- Insert Node At Last ---------------\n");
            printf("\nEnter Element For Last : ");
            scanf("%d", &ele);
            dou_ins_last(ele);
            printf("\n-----------------------------------");
            getch();
            break;

        case 3:
            printf("\n--------------- Display All Nodes ---------------\n\n");
            display();
            printf("\n\n-----------------------------------");
            getch();
            break;

        case 0:
            exit(0);
            break;

        default:
            printf("\n\nInvalid Choice.!");
            getch();
            break;
        }
    }
    return 0;
}
