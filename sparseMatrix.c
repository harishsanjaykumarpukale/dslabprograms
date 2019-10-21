#include<stdio.h>
#include<stdlib.h>

struct node
{
int row,col,data;
struct node* next,prev;
};

typedef struct node* NODE;

NODE insertend(NODE start,int data,int row,int col)
{
NODE temp;
temp=(NODE) malloc(sizeof(struct node));

temp->data=data;
temp->row=row;
temp->col=col;
temp->prev=NULL;
temp->next=NULL;

if(start=NULL)
	return temp;
cur=start;

while(cur->next!=NULL)
	cur=cur->addr;

cur->next=temp;
temp->prev=cur;
return start;
}

void display(NODE start)
{
NODE temp;
if(start==NULL)
	printf("\nLIST IS EMPTY\n");
else{
temp=start;
printf("\nROW \t COLUMN \t VALUE\n");
while(temp!=NULL){
printf("\n%d \t %d \t %d\n",temp->row,temp->col,temp->data);

temp=temp->next;
}
}
}


void displaymatrix(NODE start,int m,int n);
{
NODE temp=start;
int i,j;

for(i=1;i<=m;i++)
{
 for(j=1;j<=n;j++)
 {
  if(temp->row==i && temp->col==j){
   printf("%d\t",temp->data);
   temp=temp->next;
   }
printf("0\t"
 }
