// singly linked list implementation

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};
struct node *first, *last;
void insert_first(int x)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node *));
    if (new_node == NULL)
    {
        printf("Memory Not Available.!");
        return;
    }
    else if (first == NULL)
    {
        new_node->info = x;
        new_node->link = NULL;
        first = new_node;
    }
    else
    {
        new_node->info = x;
        new_node->link = first;
        first = new_node;
    }
}

void insert_last(int x)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node *));
    if (new_node == NULL)
    {
        printf("Memory Not Available.!");
        return;
    }
    else if (first == NULL)
    {
        new_node->info = x;
        new_node->link = NULL;
        first = new_node;
    }
    else
    {
        new_node->info = x;
        new_node->link = NULL;
        struct node *save;
        save = first;
        while (save->link != NULL)
        {
            save = save->link;
        }
        save->link = new_node;
        new_node = last;
    }
}

int delete_first()
{
    struct node *save;
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
        save = first;
        first = first->link;
        x = save->info;
        free(save);
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

void display()
{
    if (first == NULL)
    {
        printf("List is Empty.!");
    }
    else
    {
        struct node *save;
        save = first;
        while (save != NULL)
        {
            printf("%d ", save->info);
            save = save->link;
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

int main()
{
    int choice, ele, x;
    while (1)
    {
        system("cls");
        printf("========== Singly Linked List Menu ==========\n");
        printf("\n1. Insert First\n2. Insert Last\n3. Delete First Node\n4. Delete Last Node\n5. Delete Specific Node\n6. Display\n7. Count Node\n0. Exit!");
        printf("\n\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n--------------- Insert Node At First ---------------\n");
            printf("\nEnter Element For First : ");
            scanf("%d", &ele);
            insert_first(ele);
            printf("\n-----------------------------------");
            getch();
            break;

        case 2:
            printf("\n--------------- Insert Node At Last ---------------\n");
            printf("\nEnter Element For Last : ");
            scanf("%d", &ele);
            insert_last(ele);
            printf("\n-----------------------------------");
            getch();
            break;

        case 3:
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

        case 4:
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

        case 5:
            printf("\n--------------- Delete Specific Node ---------------\n");
            printf("\nEnter Element to Delete : ");
            scanf("%d", &ele);
            x = delete_specific_node(ele);
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

        case 6:
            printf("\n--------------- Display All Nodes ---------------\n\n");
            display();
            printf("\n\n-----------------------------------");
            getch();
            break;

        case 7:
            printf("\n--------------- Total Nodes In List ---------------\n\n");
            count_node();
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