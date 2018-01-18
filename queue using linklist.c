#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL;

void push(int d)
{
	struct node *temp1,*temp=head;
	temp1=(struct node *)malloc(sizeof(struct node));
	temp1->data=d;
	temp1->next=NULL;
	if(head==NULL)
	{
		head=temp1;
	}
	else
	{
		while(temp->next)
		 temp=temp->next;
		temp->next=temp1;
	}
	return ;
}
void pop(){
	struct node *temp=head;
	if(head==NULL)
	 printf("\nlist is empty");
	else
	{
		if(temp->next==NULL)
		{
			printf("\npopped item is %d",temp->data);
			free(temp);
			head=NULL;
		}
		else
		{
			printf("\npopped item is %d",temp->data);
			head=head->next;
			free(temp);
		}
	}
}
void display()
{
	struct node *temp=head;
	if(head==NULL)
	  printf("\nlist is empty");
	else
	{
		while(temp->next)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
	}
	 
}
int main()
{
	int choice,d;
	printf("\n1.push\n2.pop\n3.display\n4.exit\n");
	while(1)
	{
		printf("\nenter choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("\nenter the item to push\n");
					scanf("%d",&d);
					push(d);
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
					exit(0);
				}
			default:
				{
					printf("\nenter valid choice");
				}
		}
	}
}

