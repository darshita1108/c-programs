#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *newnode(int data)
{
	struct node *node=(struct node *)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
struct node *insert(struct node *root,int data)
{
	if(root==NULL)
	  return newnode(data);
	if(data<root->data)
	  root->left = insert(root->left,data);
	else if(data>root->data)
	  root->right=insert(root->right,data);
return root;
	  
}
void inorder(struct node *root)
{
	if(root==NULL)
	 return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}
struct node *search(struct node *node,int item)
{ 
	if(node==NULL)
	  printf("not present");
	else if(node->data==item)
	  printf("present");
	else if(item<node->data)
	  return search(node->left,item);
	else if(item>node->data)
	  return search(node->right,item);
}
void main()
{
	struct node *root=NULL;
	root=insert(root,50);
	insert(root,30);
	insert(root,40);
	insert(root,20);
	insert(root,60);
	printf("inorder traversal is\n");
	inorder(root);
	printf("\nenter the element you want to search for\n");
	int item;
	scanf("%d",&item);
	search(root,item);
	
				
}
