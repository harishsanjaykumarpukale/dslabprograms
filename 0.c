#include<stdio.h>
#include<stdlib.h>

int i,data[10],top=-1,n;


void push (int item)
{
if (top==n-1)
printf("ERROR :OVERFLOW");
else
data[++top]=item;
}



int pop()
{
if (top==-1){
printf("\nERROR:UNDERFLOW\n");
exit(0);
}
else
return data[top--];
}

void display()
{
if (top==-1)
printf("\nThe stack is empty\n");
else
{
printf("\nThe elements of stack are:\n");
for(i=0;i<n;i++)
printf("\n %d\n",data[i]);
}

}

void main()
{
int item;

printf("\nEnter the size of stack:\n");
scanf("%d",&n);

printf("\nEnter the elements of stack from the bottom :");
for(i=0;i<n;i++)
{
scanf("%d",&data[i]);
top++;
}

printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n:");
scanf("%d",&i);

switch(i)
{
case 1:
printf("\nEnter the element :\n");
scanf("%d",&item);
push(item);
break;


case 2:
printf("\nThe element poped is :%d\n",pop());
break;


case 3:
display();
break;

default: exit(0);
}
}

