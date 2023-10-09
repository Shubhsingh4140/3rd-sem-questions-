#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int info;
    struct stack *next;
} st;
st *push(st *top)
{
    st *temp;
    temp = (st *)malloc(sizeof(st));
    if (temp == NULL)
        printf("overflow\n");
    else
    {
        printf("enter the value\n");
        scanf("%d", &temp->info);
        temp->next = top;
        top = temp;
    }
    return top;
}
st *pop(st *top)
{
    if (top == NULL)
        printf("Stack is Empty\n");
    else
    {
        printf("%d\n", top->info);
        st *p1 = NULL;
        p1 = top;
        top = top->next;
        free(p1);
    }
    return top;
}
st *display(st *top)
{
    if (top == NULL)
        printf("Stack is Empty\n");
    else
    {
        st *p1 = top;
        while (p1 != NULL)
        {
            printf("%d\n", p1->info);
            p1 = p1->next;
        }
    }
    return top;
}
int main()
{
    int ch;
    st *top = NULL;
    do
    {
        printf("1.push\n2.pop\n3.display\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            top = push(top);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            top = display(top);
            break;
        default:
            exit(0);
        }
    } while (ch != 0);
    return 0;
}
