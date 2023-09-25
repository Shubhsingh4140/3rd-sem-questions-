#include<stdio.h>
#include<stdlib.h>
typedef struct snodetype
{
    int info;
    struct snodetype *next;
    }sn;
sn* altenateprint(sn *head)
{
    sn* p1=head;
    while(p1!=NULL)
    {
        printf("%d\t",p1->info);
        p1=p1->next->next;
    }
     printf("\n");
    return head;
}
sn* insertbeg(sn *head)
{
    sn *temp;
    temp=(sn*)malloc(sizeof(sn));
    if(temp==NULL)
        printf("Memory not available\n");
    else
    {
    printf("enter info\n");
    scanf("%d",&temp->info);
    temp->next=head;
    head=temp;
    }
    return head;}
sn* reverse(sn *head)
{
    sn* p1=NULL;
    sn* p2=head;
    sn* p3=NULL;
    while(p2!=NULL)
    {
        p3=p2->next;
        p2->next=p1;
        p1=p2;
        p2=p3;
        }
    head=p1;
    return head;}
sn* display(sn *head)
{
    if(head==NULL)
    printf("list is empty\n");
    else
    {
        sn *p1=head;
        while(p1!=NULL)
        {
            printf("%d\t",p1->info);
            p1=p1->next;
            }
        printf("\n");
    }
   return head;
}
void multiply(sn *head1,sn *head2)
{
  sn *p1=head1;
  sn *p2=head2;
  int rev2=0;
  int rev1=0;
  int answer=0;
  while(p1!=NULL)
  {
    rev1=rev1*10+p1->info;
    p1=p1->next;
    }
 while(p2!=NULL)
  {
    rev2=rev2*10+p2->info;
    p2=p2->next;
    }
    answer=rev1*rev2;
printf("The answer is:%d\n",answer);
}
int main()
{
    int ch,ch1;
sn *head1=NULL;
sn *head2=NULL;
do
{
printf("1. 1st linked list\n 2. 2nd Linked List\n 3. Multiply\n");
scanf("%d",&ch1);
switch(ch1)
{
case 1:{
printf("1.insertion\n2.reverse\n3.display\n4.Alternate Element\n");
scanf("%d",&ch);
switch(ch)
{
    case 1:head1=insertbeg(head1);
            break;
    case 2:head1=reverse(head1);
            break;
    case 3:head1=display(head1);
            break;
    case 4:head1=altenateprint(head1);
            break;
    default:exit(0);
    }
}
break;
case 2:{
printf("1.insertion\n2.reverse\n3.display\n4.Alternate Element\n");
scanf("%d",&ch);
switch(ch)
{
    case 1:head2=insertbeg(head2);
            break;
    case 2:head2=reverse(head2);
            break;
    case 3:head2=display(head2);
            break;
    case 4:head2=altenateprint(head2);
            break;
    default:exit(0);
    }
}
break;
case 3:multiply(head1,head2);
        break;
}
}
while(1);
}
