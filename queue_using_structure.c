#include<stdio.h>
#include<stdlib.h>
#define max 3
struct queue{
	int arr[max];
	int f;
	int r;
	}st;
void inti(struct queue *st)
	{
	st->f=st->r=-1;}
void enqueue(struct queue *st)
	{
	    int num;
	if(st->r==max-1)
		printf("Queue is full\n");
	else if(st->r==-1){
		st->r=st->f=0;
		printf("enter the value\n");
		scanf("%d",&num);
		st->arr[st->r]=num;}
	else
	{
	(st->r)+=1;
	printf("enter the value\n");
		scanf("%d",&num);
		st->arr[st->r]=num;}
		}
void dequeue(struct queue *st)
	{
	if(st->r==-1)
		printf("queue is empty\n");
	else if((st->r)==(st->f)){
		printf("%d\n",st->arr[st->f]);
		st->f=st->r=-1;
		}
	else{
		printf("%d\n",st->arr[st->f]);
		(st->f)+=1;
		}
		}
void traverse(struct queue *st)
{
	int i;
	for(i=(st->r);i>=(st->f);i--)
		printf("%d\t",st->arr[i]);
	printf("\n");
	}
void main()
{
inti(&st);
int ch;
do
{
printf("1.enqueue\n2.dequeue\n3.traverse\nEnter the choice\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:enqueue(&st);
		break;
	case 2:dequeue(&st);
		break;
	case 3:traverse(&st);
		break;
	default:exit(0);
}
}
while(ch!=0);
}
		
