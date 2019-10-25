#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *left,*right;
};

typedef struct node* NODE;

NODE createbst(NODE root,int item)
{
NODE temp,prev,cur;

temp=(NODE) malloc(sizeof(struct node));

temp->data=item;
temp->left=NULL;
temp->right=NULL;

if(root==NULL)
	return temp;
prev=NULL;
cur=root;

while(cur!=NULL)
{
prev=cur;

if(item<cur->data)
	cur=cur->left;
else
	cur=cur->right;
}

if(item<prev->data)
	prev->left=temp;
else
	prev->right=temp;
return root;
}


void preorder(NODE root)
{
if(root!=NULL){
printf("%d\t",root->data);
preorder(root->left);
preorder(root->right);
}
}

void inorder(NODE root)
{
if(root!=NULL){
inorder(root->left);
printf("%d\t",root->data);
inorder(root->right);
}
}

void postorder(NODE root)
{
if(root!=NULL){
postorder(root->left);
postorder(root->right);
printf("%d\t",root->data);
}
}

NODE inordersuccessor(NODE root)
{
NODE cur=root;
while(cur->left!=NULL)
	cur=cur->left;
return cur;
}

NODE delete(NODE root,int key)
{
NODE temp;

if(root==NULL)
	return root;

else if(key<root->data)
	root->left=delete(root->left,key);
else if(key>root->data)
	root->right=delete(root->right,key);
else{
	if(root->left==NULL){
		temp=root->right;
		free(root);
		return temp;
	}
	
	else if(root->right==NULL){
		temp=root->left;
		free(root);
		return temp;
	}

temp=inordersuccessor(root->right);
root->data=temp->data;
root->right=delete(root->right,temp->data);
}
return root;
}	

void main(){
NODE root=NULL;
int item,key,ch;

for(;;){
printf("\n1.Insert\n2.Delete\n3.Pre-order Traversal\n4.In-order Traversal\n5.Post-order\n6.Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
getchar();

switch(ch){
case 1: printf("\nEnter the element to be inserted:");
	scanf("%d",&item);
	root=createbst(root,item);
	break;

case 2: printf("\nEnter node to be deleted:");
	scanf("%d",&key);
	root=delete(root,key);
	break;

case 3: printf("Pre-order Traversal is:\n");
	preorder(root);
	break;

case 4: printf("In-order Traversal is:\n");
        inorder(root);
        break;

case 5: printf("Post-order Traversal is:\n");
        postorder(root);
        break;

default:exit(0);
}
}
}

