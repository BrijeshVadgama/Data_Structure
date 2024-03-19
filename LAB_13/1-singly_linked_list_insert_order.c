// insertion in order in singly linked list

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first, *last;

void insert_ord(int x)
{
    struct node *new_node, *save, *prev;
    new_node = (struct node *)malloc(sizeof(struct node *));
    new_node->info = x;
    if (new_node == NULL)
    {
        printf("Memory Not Available.!");
        return;
    }
    else if (first == NULL)
    {
        first = new_node;
        new_node->link = NULL;
    }
    else if (new_node->info <= first->info)
    {
        new_node->link = first;
        first = new_node;
    }
    else
    {
        save = prev = first;
        while ((save != NULL) && (new_node->info >= save->info))
        {
            prev = save;
            save = save->link;
        }
        new_node->link = save;
        prev->link = new_node;
    }
}

int delete_first()
{
    struct node *temp;
    int x;

    if (first == NULL)
    {
        return -1;
    }
    else if (first->link == NULL)
    {
        x = first->info;
        first = NULL;
        return x;
    }
    else
    {
        temp = first;
        first = first->link;
        x = temp->info;
        free(temp);
        return x;
    }
}

int delete_last()
{
    struct node *prev;
    int x;

    if (first == NULL)
    {
        return -1;
    }
    else if (first->link == NULL)
    {
        x = first->info;
        first = NULL;
        return x;
    }
    else
    {
        prev = last = first;
        while (last->link != NULL)
        {
            prev = last;
            last = last->link;
        }
        x = last->info;
        prev->link = NULL;
        free(last);
        return x;
    }
}

int delete_specific_node(int n)
{
    struct node *save, *prev;
    int x;
    if (first == NULL)
    {
        return -1;
    }
    else if (first->info == n)
    {
        x = first->info;
        save = first;
        if (first->link != NULL)
        {
            first = first->link;
        }
        else
        {
            first = NULL;
        }
        free(save);
        return x;
    }
    else
    {
        prev = save = first;
        while ((save->info != n) && (save != NULL))
        {
            prev = save;
            save = save->link;
        }
        if (save->info == n)
        {
            x = save->info;
            prev->link = save->link;
            free(save);
            return x;
        }
        else
        {
            return -1;
        }
    }
}

void count_node()
{
    struct node *save;
    int count = 0;
    save = first;
    while (save != NULL)
    {
        save = save->link;
        count++;
    }
    printf("Total Nodes In List : %d ", count);
}

void display()
{
    struct node *save;
    if (first == NULL)
    {
        printf("List is Empty.!");
    }
    else
    {
        save = first;
        while (save != NULL)
        {
            printf("%d ", save->info);
            save = save->link;
        }
    }
}

int main()
{
    int choice, x;
    while (1)
    {
        system("cls");
        printf("\n----- Insert Order -----\n");
        printf("\n1. Insert \n2. Delete First Node \n3. Delete Last Node \n4. Delete Specific Node \n5. Display\n6. count \n0. Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter Value : ");
            scanf("%d", &x);
            insert_ord(x);
            printf("\n-------------------------------");
            getch();
            break;

        case 2:
            printf("\n--------------- Delete First Node ---------------\n");
            x = delete_first();
            if (x == -1)
            {
                printf("\nList is Empty.!\n");
            }
            else
            {
                printf("\nDeleted Node is : %d\n", x);
            }
            printf("\n-----------------------------------");
            getch();
            break;

        case 3:
            printf("\n--------------- Delete Last Node ---------------\n");
            x = delete_last();
            if (x == -1)
            {
                printf("\nList is Empty.!\n");
            }
            else
            {
                printf("\nDeleted Node is : %d\n", x);
            }
            printf("\n-----------------------------------");
            getch();
            break;

        case 4:
            printf("\n--------------- Delete Specific Node ---------------\n");
            printf("\nEnter Element to Delete : ");
            scanf("%d", &x);
            x = delete_specific_node(x);
            if (x == -1)
            {
                printf("\nList is Empty.!\n");
            }
            else
            {
                printf("\nDeleted Node is : %d\n", x);
            }
            printf("\n-----------------------------------");
            getch();
            break;

        case 5:
            printf("\n---------- Display All Nodes ----------\n\n");
            display();
            printf("\n\n-------------------------------");
            getch();
            break;

        case 6:
            printf("\n---------- Count All Nodes ----------\n\n");
            count_node();
            printf("\n\n-------------------------------");
            getch();
            break;

        default:
            printf("\nInvalid Choice.!");
            printf("\n\n-------------------------------");
            getch();
            break;

        case 0:
            exit(0);
            break;
        }
    }
    return 0;
}
