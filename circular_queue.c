#include<stdio.h>
#include<stdlib.h>
#define max 3
int arr[max];	
int f=-1;
int r=-1;
void enqueue()
	{
	    int num;
	if(f==(r+1)%max)
		printf("Queue is full\n");
	else if(r==-1){
		r=f=0;
		printf("enter the value\n");
		scanf("%d",&num);
		arr[r]=num;}
	else
	{
	r=(r+1)%max;
	printf("enter the value\n");
		scanf("%d",&num);
		arr[r]=num;}
		}
void dequeue()
	{
	if(r==-1)
		printf("queue is empty\n");
	else if(r==f){
		printf("%d\n",arr[f]);
		f=r=-1;
		}
	else{
		printf("%d\n",arr[f]);
		f=(f+1)%max;
		}
		}
void traverse()
{
	int i=f;
		
	while(i!=r){
			printf("%d\t",arr[i]);
		i=(i+1)%max;
		}
			printf("%d\t",arr[i]);
	printf("\n");
	}
void main()
{
int ch;
do
{
printf("1.enqueue\n2.dequeue\n3.traverse\nEnter the choice\n");
scanf("%d",&ch);
switch(ch)
{
	case 1:enqueue();
		break;
	case 2:dequeue();
		break;
	case 3:traverse();
		break;
	default:exit(0);
}
}
while(ch!=0);
}
		
