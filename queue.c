#include<stdio.h>
int queue[100],i,rear,front,x,choice,n;
void push();
void pop();
void display();
void main()
{
	rear=-1;
	front=-1;
	printf("\nenter the size of queue");
	scanf("%d",&n);
	printf("\nqueue operations");
	printf("\n1.push\n2.pop\n3.display\n4.exit\n");
	do
	{
		printf("\nenter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					push();
					break;
				}
			case 2:
				{
					pop();
					break;
				}
			case 3:
				{
					display();
					break;
				}
			case 4:
				{
				    printf("\nexit");
				    break;
				}
			default:
				{
					printf("\nenter valid choice");
				}
				
		}
	}while(choice!=4);
}
void push()
{
	if((rear==front)&&(front==-1))
	{
		scanf("%d",&x);
		front=0;
		rear=0;
		queue[rear]=x;
	}
	else if(rear>=n-1)
	  printf("\noverflow");
	else{
		scanf("%d",&x);
		rear++;
		queue[rear]=x;
	}
}
void pop(){
	if(rear==-1)
	 printf("\nunderflow");
	else{
		printf("popped item is  %d",queue[front]);
		front++;
	}
}
void display(){
	if(rear==-1)
	  printf("\nempty");
	else{
		for(i=front;i<=rear;i++)
		{
			printf("%d ",queue[i]);
		}
	}
}
