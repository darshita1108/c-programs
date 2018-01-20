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
	struct node *root=(struct node *)malloc(sizeof(struct node));
	root->data=data;
	root->left=NULL;
	root->right=NULL;
	return root;
}
void preorder(struct node *root)
{
	if(root==NULL)
	  return;
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node *root)
{
	if(root==NULL)
	  return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}
void inorder(struct node *root)
{
	if(root==NULL)
	  return;
	postorder(root->left);
	printf("%d ",root->data);
	postorder(root->right);
	
}
void main()
{
	struct node *root;
	root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	printf("preorder traversal is\n");
	preorder(root);
	printf("\npostorder traversal is\n");
	postorder(root);
	printf("\ninorder traversal is\n");
	inorder(root);
}
