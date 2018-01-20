#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL;

struct node *create(int n)
{
	struct node *last,*temp;
	int i;
	for(i=1;i<=n;i++)
	{
    temp=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&temp->data);
	temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
			last=temp;
		}
		else
		{
			last->next=temp;
			last=temp;
		}
	}
	return head;
}

void print(struct node *head)
{
	struct node *temp=head;
	if(head==NULL)
	{
		printf("list is empty\n");
	}
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
 

void insert(int pos,int n)
{
	struct node *temp=head,*temp1;
	temp1=(struct node *)malloc(sizeof(struct node));
	printf("\nenter the item to insert");
	scanf("%d",&temp1->data);
	temp1->next=NULL;
	if(pos==1){
		temp1->next=head;
		head=temp1;
	}
	else if(pos==n){
		while(temp->next)
		  temp=temp->next;
		temp->next=temp1;
	}
	else{
		int j=1;
		while(j<pos-1)
		{
		temp=temp->next;
		j++;
      	}
		temp1->next=temp->next;
		temp->next=temp1;
	   }
}

int main()
{
	int n,pos;
	printf("enter the size of list\n");
	scanf("%d",&n);
	head=create(n);
	print(head);
	printf("\nenter the position to insert new node\n");
	scanf("%d",&pos);
	insert(pos,n);
	print(head);
	
}
