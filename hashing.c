#include<stdio.h>
#include<stdlib.h>
#define S 10

int a[S];
void main(){
int ch,item;
for(;;){
printf("PRESS \n 1 for Insert\n 2 for Deleting\n 3 for Display\n 4 for Exit.\n");
printf("Enter Your Choice:\n");
scanf("%d",&ch);

switch(ch){
case 1: printf("\nEnter the element :");
	scanf("%d",&item);
	insert(item);
	break;
