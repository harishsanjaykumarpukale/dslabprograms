#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 5

struct queue
{
char data[SIZE][25];
int f,r;
};

typedef struct queue QUEUE;

void enqueue(QUEUE *q,char item[])
{
if(q->f==(q->r+1)%SIZE)
	printf("Queue is full");
else
{
q->r=(q->r+1)%SIZE;
strcpy(q->data[q->r],item);
if(q->f==-1)
q->f=0;
}
}

char* dequeue(QUEUE *q)
{
char *d;
if(q->f==-1){
	printf("Queue is empty");
	return NULL;
}

else
{
d=q->data[q->f];
if(q->f==q->r)
{
q->f=-1;
q->r=-1;
}
else
q->f=(q->f+1)%SIZE;
}
return d;
}

void display(QUEUE q)
{
int i;
if(q.f==-1)
printf("Queue is empty");
else
{
printf("Queue elementts are :\n");

if(q.f<=q.r)
	for(i=q.f;i<=q.r;i++)
		printf("%s\n",q.data[i]);
else
{
for(i=q.f;i<SIZE;i++)
printf("%s\n",q.data[i]);
for(i=0;i<=q.r;i++)
printf("%s\n",q.data[i]);
}
}
}


void main()
{
int ch;
char item[25],*d;
QUEUE q;
q.f=-1;
q.r=-1;

for(;;)
{
printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
printf("Enter your choice:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the message\n");
scanf(" %[^\n]s",item);
enqueue(&q,item);
break;

case 2:
d=dequeue(&q);

if(d!=NULL)
	printf("The message deleted is %s\n",d);
else
	printf("ERROR IN DELETING\n");
break;

case 3:
display(q);
break;

default:
exit(0);

}
}
}

