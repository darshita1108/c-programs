#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
}*head=NULL;

struct node *create(int n)
{
	struct node *temp,*last;
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
	while(temp)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
void main()
{
	int n;
	scanf("%d",&n);
	head=create(n);
	int pos;
	scanf("%d",&pos);
	/*copying first list in another*/
	struct node *temp,*temp2=head,*head2=NULL,*last;
	while(temp2!=NULL)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=temp2->data;
		temp->next=NULL;
		if(head2==NULL)
		{
			head2=temp;
			last=temp;
		}
		else
		{
			last->next=temp;
			last=temp;
		}
		temp2=temp2->next;
	}
	struct node *node=head,*node2=head;
	int j=1;
	while(j<pos)
	{
		node=node->next;
		j++;
	}
	while(node)
	{
		int c=node->data;
		node->data=node2->data;
		node2->data=c;
		node=node->next;
		node2=node2->next;
	}
	int pos2=n-pos+1;
	struct node *temp3=head2,*temp4=head;
	int l=1;
	while(l<=pos2)
	{
		temp4=temp4->next;
		l++;
	}
	while(temp4)
	{
		temp4->data=temp3->data;
		temp3=temp3->next;
		temp4=temp4->next;
	}
	print(head);
	
}

