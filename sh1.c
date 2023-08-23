#include<stdio.h>
#include<stdlib.h>
#define max 3
struct student
{
    int arr[max];
    int top;
}st;
void inti(struct student *st)
{
    st->top=-1;}
void push(struct student *st)
{int val;
    if(st->top==max-1)
        printf("stack overflow\n");
    else
        {
        printf("enter the value\n");
        scanf("%d",&val);
            st->arr[++(st->top)]=val;
            }
}
void pop(struct student *st)
{
  if(st->top==-1)
        printf("stack underflow");
    else
        {
            printf("%d",st->arr[st->top]);
            st->top--;
            }  }
void traverse(struct student *st)
{int temp,i;
  if(st->top==-1)
        printf("stack underflow\n");
    else
            {temp=st->top;
            while(temp!=-1)
            {
                printf("%d\n",st->arr[temp]);
                temp--;
            }}
              }
void main()
{
inti(&st);
int ch;
    do{
    printf("1.push\n2.pop\n3.traverse\n ");
    printf("enter the choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:push(&st);
                break;
        case 2:pop(&st);
                break;
        case 3: traverse(&st);
                break;
        default: exit(0);
        }}
    while(ch!=0);
    }
