#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}*head=NULL;

struct node *create(int n)
{
	struct node *last,*temp1;
	int i;
	for(i=1;i<=n;i++)
	{
		temp1=(struct node *)malloc(sizeof(struct node));
		scanf("%d",&temp1->data);
		temp1->next=NULL;
		if(head==NULL)
		{
			head=temp1;
			last=temp1;
		}
		else{
			last->next=temp1;
			last=temp1;
		}
		
	}
	return head;
}
void print(struct node *head)
{
	struct node *temp1=head;
		while(temp1->next)
		{
			printf("%d ",temp1->data);
			temp1=temp1->next;
        }
		printf("%d",temp1->data);
	
}

int main()
{
	int n;
	scanf("%d",&n);
	head=create(n);
	struct node *current=head,*pre=NULL,*next;
	while(current)
	{
		next=current->next;
		current->next=pre;
		pre=current;
		current=next;
	}
	head=pre;
	print(head);
	return 0;
}
