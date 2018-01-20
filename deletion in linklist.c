
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*head=NULL;

struct node *create(int n)
{
	struct node *last,*temp1;
	int i;
	for(i=1;i<=n;i++)
	{
		temp1=(struct node * )malloc(sizeof(struct node));
		scanf("%d",&temp1->data);
		temp1->next=NULL;
		if(head==NULL)
		{
			head=temp1;
			last=temp1;
		}
		else
		{
			last->next=temp1;
			last=temp1;
		}
	}
	return head;
}

void print(struct node *head)
{
	struct node *temp=head;
	if(head==NULL)
	 printf("\nlist is empty");
	else
	{
		while(temp->next)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
			printf("%d",temp->data);
	}
}
void deletion(int pos,int n)
{
	struct node *temp=head,*pre;
	if(pos==1)
	{
		head=head->next;
		free(temp);
	}
	else if(pos==n)
	{
		while(temp->next)
		{
			pre=temp;
			temp=temp->next;
		}
		pre->next=NULL;
		free(temp);
	}
	else
	{
		int j=1;
		while(j<pos-1)
		{
			temp=temp->next;
			j++;
		}
		pre=temp->next;
		temp->next=pre->next;
		free(pre);
	}
}
void main()
{
	int n,pos;
	printf("\nenter the size of list\n");
	scanf("%d",&n);
	head=create(n);
	print(head);
	printf("\nenter the position which is to be deleted\n");
	scanf("%d",&pos);
	deletion(pos,n);
	print(head);
}
