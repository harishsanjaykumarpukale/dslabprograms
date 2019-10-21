#include<stdio.h>
#include<stdlib.h>
#define SIZE 15
int i,data[10],top=-1,n;

struct stack
{
int data[SIZE],top;
};

typedef struct stack STACK;

void push (STACK *s,int item)
{
if (s->top==SIZE-1)
printf("\nERROR :OVERFLOW\n");
else
s->data[++(s->top)]=item;
}



int pop(STACK *s)
{
if (s->top==-1){
printf("\nERROR:UNDERFLOW\n");
exit(0);
}
else
return s->data[(s->top)--];
}

void display(STACK *s)
{
if (s->top==-1)
printf("\nThe stack is empty\n");
else
{
printf("\nThe elements of stack are:\n");
for(i=0;i<=(s->top);i++)
printf("\n %d\n",s->data[i]);
}

}

void main()
{
int item;


STACK s;
s.top=-1;


printf("\nEnter the number of elements you want to enter into stack now:\n");
scanf("%d",&n);
if(n<=SIZE){
printf("\nEnter the elements of stack from the bottom :\n");
for(i=0;i<n;i++)
{
scanf("%d",&s.data[i]);
s.top++;
}
}
else 
printf("\nRum the program once again and  Please take a lesser size :\n");


printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n:");
scanf("%d",&i);

switch(i)
{
case 1:
printf("\nEnter the element :\n");
scanf("%d",&item);
push(&s,item);
display(&s);
break;


case 2:
printf("\nThe element poped is :%d\n",pop(&s));
break;


case 3:
display(&s);
break;

default: exit(0);
}
}

