#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct node
{
int data;
struct node* addr;
};

typedef struct node* NODE;

NODE insertend(NODE head,int item)
{
NODE temp,cur;

temp=(NODE) malloc(sizeof(struct node));

temp->data=item;

cur=head->addr;

while(cur->addr!=head)
     cur=cur->addr;

cur->addr=temp;

temp->addr=head;

return head;
}

NODE insertbegin(NODE head,int item)
{
NODE temp;
temp=(NODE) malloc(sizeof(struct node));
temp->data=item;
temp->addr=head->addr;
head->addr=temp;
return head;
}

void display(NODE head)
{
NODE temp;
if(head->addr==head)
printf("\n LIST IS EMPTY\n");
else
{
temp=head->addr;
while(temp!=head){
printf("%d",temp->data);
temp=temp->addr;
}
}
}
void addzeros(NODE h1,NODE h2)
{
NODE temp;
int i,c1=0,c2=0;


temp=h1->addr;

while(temp!=h1){
	c1+=1;
	temp=temp->addr;
}

temp=h2->addr;

while(temp!=h2){
	c2+=1;
	temp=temp->addr;
}

if(c1>c2){
for(i=1;i<=c1-c2;i++)
	h2=insertend(h2,0);
}
else{
for(i=1;i<=c2-c1;i++)
	h1=insertend(h1,0);
}
}

add(NODE h1,NODE h2)
{
NODE h,cur1,cur2;
int sum=0,carry=0;
h=(NODE) malloc(sizeof(struct node));
h->addr=h;

cur1=h1->addr;
cur2=h2->addr;

while(cur1!=h1){
sum=cur1->data+cur2->data+carry;
carry=sum/10;

h=insertbegin(h,sum%10);
cur1=cur1->addr;
cur2=cur2->addr;
}
if(carry>0)
	h=insertbegin(h,carry);
printf("Result is :\n");
display(h);
}



void main()
{
char fir[20],sec[20];
NODE h1,h2;
int i;

h1=(NODE) malloc(sizeof(struct node));
h1->addr=h1;

h2=(NODE) malloc(sizeof(struct node));
h2->addr=h2;


printf("\n Enter the first number:\n");
scanf("%s",fir);
for(i=0;fir[i]!='\0';i++)
	h1=insertbegin(h1,fir[i]-'0');
printf("\n Enter the second number:\n");
scanf("%s",sec);
for(i=0;sec[i]!='\0';i++)
        h2=insertbegin(h2,sec[i]-'0');

addzeros(h1,h2);
add(h1,h2);


}
