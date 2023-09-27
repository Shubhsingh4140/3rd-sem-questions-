#include <stdio.h>
#include <stdlib.h>
typedef struct ll
{
    /* data */
    int info;
    struct ll *next;

} sn;

sn *removalnth(sn *head)
{
    sn *p1 = head;
    sn *p2 = head;
    sn *p3 = head;
    int n, c = 1;
    int a = 1;
    while (p1->next != NULL)
    {
        c++;
        p1 = p1->next;
    }
    printf("enter the node number to be deleted from last\n");
    scanf("%d", &n);
    while (a != (c - n))
    {
        a++;
        p2 = p2->next;
    }
    p3 = p2->next;
    printf("%d\n", p3->info);
    p2->next = p2->next->next;
    free(p3);
    return head;
}
sn *insertatbeg(sn *head)
{
    sn *temp;
    temp = (sn *)malloc(sizeof(sn));
    if (temp == NULL)
        printf("memory not aavailable");
    else
    {
        printf("enter info\n");
        scanf("%d", &temp->info);
        temp->next = head;
        head = temp;
    }
    return head;
}
sn *insertatlast(sn *head)
{
    sn *temp;
    temp = (sn *)malloc(sizeof(sn));
    if (temp == NULL)
        printf("memory not aavailable");
    else
    {
        printf("enter info\n");
        scanf("%d", &temp->info);
        if (head == NULL)
        {
            temp->next = head;
            head = temp;
        }
        else
        {
            sn *p1 = head;
            while (p1->next != NULL)
            {
                p1 = p1->next;
            }
            p1->next = temp;
            temp->next = NULL;
        }
    }
    return head;
}
sn *insertafternode(sn *head)
{
    int n;
    int c = 1;
    sn *temp;
    sn *p1 = head;
    temp = (sn *)malloc(sizeof(sn));
    if (temp == NULL)
        printf("memory not aavailable");
    else
    {
        printf("enter the position\n");
        scanf("%d", &n);
        printf("enter info\n");
        scanf("%d", &temp->info);
        while (c != n)
        {
            p1 = p1->next;
            c++;
        }
        temp->next = p1->next;
        p1->next = temp;
    }
    return head;
}
sn *insertbeforenode(sn *head)
{
    int n;
    int c = 1;
    sn *temp;
    sn *p1 = head;
    temp = (sn *)malloc(sizeof(sn));
    if (temp == NULL)
        printf("memory not aavailable");
    else
    {
        printf("enter the position\n");
        scanf("%d", &n);
        printf("enter info\n");
        scanf("%d", &temp->info);
        while (c != (n - 1))
        {
            p1 = p1->next;
            c++;
        }
        temp->next = p1->next;
        p1->next = temp;
    }
    return head;
}
sn *insertatposition(sn *head)
{
    int n;
    sn *temp;
    sn *p1 = head;
    temp = (sn *)malloc(sizeof(sn));
    if (temp == NULL)
        printf("memory not aavailable");
    else
    {
        printf("enter the info\n");
        scanf("%d", &n);
        printf("enter info\n");
        scanf("%d", &temp->info);
        while (p1->info != n)
        {
            p1 = p1->next;
        }
        temp->next = p1->next;
        p1->next = temp;
    }
    return head;
}
sn *deletefrombeg(sn *head)
{
    sn *p1;
    if (head == NULL)
        printf("list is empty\n");
    else
    {
        printf("%d", head->info);
        p1 = head;
        head = head->next;
        free(p1);
    }
    return head;
}
sn *deletefromlast(sn *head)
{
    sn *p1 = head;
    sn *p2 = head;
    if (head == NULL)
        printf("list is empty\n");
    else
    {
        while (p1->next != NULL)
        {
            p2 = p1;
            p1 = p1->next;
        }
        printf("%d", p1->info);
        p2->next = NULL;
        free(p1);
    }
    return head;
}
sn *deletebeforenode(sn *head)
{
    int n, c;
    c = 1;
    sn *p1 = head;
    sn *p2 = head;
    if (head == NULL)
        printf("list is empty\n");
    else
    {
        printf("enter the node to be deleted\n");
        scanf("%d", &n);
        while (c != (n - 1))
        {
            p2 = p1;
            p1 = p1->next;
            c++;
        }
        printf("%d", p1->info);
        p2->next = p1->next;
        free(p1);
    }
    return head;
}
sn *deleteafternode(sn *head)
{
    int n, c;
    c = 1;
    sn *p1 = head->next;
    sn *p2 = head;
    if (head == NULL)
        printf("list is empty\n");
    else
    {
        printf("enter the node to be deleted\n");
        scanf("%d", &n);
        while (c != (n))
        {
            p2 = p1;
            p1 = p1->next;
            c++;
        }
        printf("%d", p1->info);
        p2->next = p1->next;
        free(p1);
    }
    return head;
}
sn *deleteatpoistion(sn *head)
{
    int n;
    sn *p1 = head;
    sn *p2 = head;
    if (head == NULL)
        printf("list is empty\n");
    else
    {
        printf("enter the node to be deleted\n");
        scanf("%d", &n);
        while (p1->info != n)
        {
            p2 = p1;
            p1 = p1->next;
        }
        printf("%d", p1->info);
        p2->next = p1->next;
        free(p1);
    }
    return head;
}
sn *display(sn *head)
{
    if (head == NULL)
        printf("list is empty\n");
    else
    {
        sn *p1 = head;
        while (p1 != NULL)
        {
            printf("%d\t", p1->info);
            p1 = p1->next;
        }
        printf("\n");
    }
    return head;
}
int main()
{
    sn *head = NULL;
    int ch;
    do
    {
        /* code */
        printf("1.insertion at beginning\n2.insertion at last\n3.insertion before node\n4.insertion after a node\n5.insertion at position\n6.deletion at begining\n7.deletion at last\n8deletion after a node\n9.deletion before a node\n10.deletion after particular postitiom\n11.display\n12.deletion of nth node from last\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = insertatbeg(head);
            break;
        case 2:
            head = insertatlast(head);
            break;
        case 3:
            head = insertbeforenode(head);
            break;
        case 4:
            head = insertafternode(head);
            break;
        case 5:
            head = insertatposition(head);
            break;
        case 6:
            head = deletefrombeg(head);
            break;
        case 7:
            head = deletefromlast(head);
            break;
        case 8:
            head = deleteafternode(head);
            break;
        case 9:
            head = deletebeforenode(head);
            break;
        case 10:
            head = deleteatpoistion(head);
            break;
        case 11:
            head = display(head);
            break;
        case 12:
            head = removalnth(head);
            break;
        default:
            exit(0);
        }
    } while (ch != 0);
    return 0;
}
