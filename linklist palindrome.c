#include<stdio.h>
#include<stdlib.h>
struct node{
	string data;
	struct node *next;
}*head=NULL;

struct node *create(int n)
{
	struct node *last,*temp1;
	int i;
	for(i=1;i<=n;i++)
	{
		temp1=(struct node *)malloc(sizeof(struct node));
		scanf("%s",&temp1->data);
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
/*
void print(struct node *head)
{
struct node *temp=head;
while(temp->next)
{
printf("%c ",temp->data);
temp=temp->next;
}
printf("%c ",temp->data);
}*/
int main()
{
	int n;
	scanf("%d",&n);
	head=create(n);
	printf("\n");
		/*creating copy of first linklist*/
	struct node *head2=NULL,*temp,*temp2,*last;
	temp2=head;
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
	/*reversing the original list*/
	struct node *current=head,*pre=NULL,*next;
	while(current)
	{
		next=current->next;
		current->next=pre;
		pre=current;
		current=next;
	}
	head=pre;
	/*comparing reverse and copy*/
	int c=0;
	struct node *check1=head,*check2=head2;
	while(check1&&check2)
	{
		if(check1->data!=check2->data)
		{
			c=1;
			break;
		}
		check1=check1->next;
		check2=check2->next;
	}
	if(c==0)
	 printf("YES");
	else
	 printf("NO");
	return 0;
}

