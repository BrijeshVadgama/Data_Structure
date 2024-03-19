// Circular Linked List Implementation

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *first, *last;

void cir_ins_first(int x)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node *));
    new_node->info = x;
    if (new_node == NULL)
    {
        printf("Memory Not Available.!");
        return;
    }
    else
    {
        if (first == NULL)
        {
            new_node->link = new_node;
            first = last = new_node;
        }
        else
        {
            new_node->link = first;
            last->link = new_node;
            first = new_node;
        }
    }
}

void cir_ins_last(int x)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node *));
    new_node->info = x;
    if (new_node == NULL)
    {
        printf("Memory Not Available.!");
        return;
    }
    else
    {
        if (first == NULL)
        {
            new_node->link = new_node;
            first = last = new_node;
        }
        else
        {
            new_node->link = first;
            last->link = new_node;
            last = new_node;
        }
    }
}

void cir_ins_ord(int x)
{
    struct node *new_node, *save, *prev;
    new_node = (struct node *)malloc(sizeof(struct node *));
    new_node->info = x;
    if (new_node == NULL)
    {
        printf("Memory Not Available.!");
        return;
    }
    else
    {
        if (first == NULL)
        {
            new_node->link = new_node;
            first = last = new_node;
        }
        else
        {
            if (new_node->info <= first->info)
            {
                new_node->link = first;
                last->link = new_node;
                first = new_node;
            }
            else
            {
                save = first;
                while ((save->link != last) && (new_node->info >= save->link->info))
                {
                    save->link = save;
                }
                new_node->link = save->link;
                save->link = new_node;
                if (save == last)
                {
                    last = new_node;
                }
            }
        }
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
    else
    {
        save = first;
        x = first->info;
        if (first == last)
        {
            first = last = NULL;
        }
        else
        {
            first = first->link;
            last->link = first;
        }
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
        prev = first;
        while (prev->link != last)
        {
            prev = prev->link;
        }
        x = last->info;
        prev->link = NULL;
        free(last);
        last = prev;
        return x;
    }
}

int cir_del_specific_node(int n)
{
    struct node *save, *pred;
    if (first == NULL)
    {
        return -1;
    }
    else
    {
        save = first;
        pred = last;
        while (save->info != n && save != last)
        {
            pred = save;
            save = save->link;
        }
        if (save->info != n)
        {
            printf("Node not found\n");
        }
        else
        {
            if (first == last)
            {
                first = last = NULL;
            }
            else if (save == first)
            {
                first = first->link;
                last->link = first;
            }
            else
            {
                pred->link = save->link;
                if (save == last)
                {
                    last = pred;
                }
            }
            free(save);
            return n;
        }
    }
}

void display()
{
    struct node *save;
    if (first == NULL)
    {
        printf("List is empty.");
        return;
    }
    save = first;
    while (save != last)
    {
        printf("%d ", save->info);
        save = save->link;
    }
    printf("%d ", save->info);
}

void count_node()
{
    struct node *save;
    int count = 0;
    if (first == NULL)
    {
        printf("List is empty.!");
        return;
    }
    save = first;
    while (save != last)
    {
        save = save->link;
        count++;
    }
    printf("Total Nodes in List : %d", count + 1);
}

int main()
{
    int choice, ele, x;
    while (1)
    {
        system("cls");
        printf("========== Circular Linked List Menu ==========\n");
        printf("\n1. Insert Node At First\n2. Insert Node At Last\n3. Insert Node In Order\n4. Delete First Node\n5. Delete Last Node\n6. Delete Specific Node\n7. Display\n8. Count Node\n0. Exit!");
        printf("\n\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n--------------- Insert Node At First ---------------\n");
            printf("\nEnter Element For First : ");
            scanf("%d", &ele);
            cir_ins_first(ele);
            printf("\n-----------------------------------");
            getch();
            break;

        case 2:
            printf("\n--------------- Insert Node At Last ---------------\n");
            printf("\nEnter Element For Last : ");
            scanf("%d", &ele);
            cir_ins_last(ele);
            printf("\n-----------------------------------");
            getch();
            break;

        case 3:
            printf("\n--------------- Insert Node In Order ---------------\n");
            printf("\nEnter Element : ");
            scanf("%d", &x);
            cir_ins_ord(x);
            printf("\n-------------------------------");
            getch();
            break;

        case 4:
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

        case 5:
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

        case 6:
            printf("\n--------------- Delete Specific Node ---------------\n");
            printf("\nEnter Element to Delete : ");
            scanf("%d", &ele);
            x = cir_del_specific_node(ele);
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

        case 7:
            printf("\n--------------- Display All Nodes ---------------\n\n");
            display();
            printf("\n\n-----------------------------------");
            getch();
            break;

        case 8:
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