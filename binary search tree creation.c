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
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
void inorder(struct node *root)
{
	if(root==NULL)
	  return;
	inorder(root->left);
	printf("%d  ",root->data);
	inorder(root->right);
}
struct node *insert(struct node *node,int data)
{
	if(node==NULL)
	  return newnode(data);
	if(data>node->data)
	  node->right=insert(node->right,data);
	else
	 node->left=insert(node->left,data);
	return node;
}
void main()
{
	struct node *root=NULL;
	root=insert(root,40);
	insert(root,59);
	insert(root,90);
	insert(root,30);
	printf("\ninorder traversal of the bst is \n");
	inorder(root);
}
