#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
void main()
{
	top=-1;
	printf("enter the size of stack\n");
	scanf("%d",&n);
	printf("stack operations\n");
	printf("\n1.push\n2.pop\n3.display\n4.exit\n");
	do{
		printf("enter choice\n");
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
				printf("exit");
				break;
		    }
		 default:
			{
				printf("please enter valid choice");
			}
		}
	}while(choice!=4);
	
}
void push()
{
	if(top>=n-1)
	 printf("stack overflow");
	else
	 {
	 	printf("enter value to enter");
	 	scanf("%d",&x);
	 	top++;
	 	stack[top]=x;
	 	
	 }
}
void pop(){
	if(top<=-1)
	 printf("stack underflow");
	else{
		printf("popped item is %d",stack[top]);
		top--;
	}
}
void display(){
	if(top>=0)
	{
		printf("elements are");
		for(i=top;i>=0;i--)
		{
			printf("%d",stack[i]);
			
		}
		printf("\nenter next choice\n");
	}
	else{
		printf("empty");
	}
}
