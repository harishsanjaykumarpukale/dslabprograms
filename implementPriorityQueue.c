#include<stdio.h>
#include<stdlib.h>

int n;

void swap(int*a,int*b){
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
}

int heapify(int a[],int i){
int l,r,b;
l=2*i;
r=2*i+1;

b=i;

if(l<=n && a[l]>a[i])
	b=l;
if(r<=n && a[r]>a[b])
	b=r;

if(b!=i){
swap(&a[i],&a[b]);

heapify(a,b);
}
}

int extract_max(int a[]){

int max;

if(n==0){
printf("\nThe Heap is Empty\n");
return -1;
}

else{
max=a[1];
a[1]=a[n];

n-=1;

heapify(a,1);
return max;
}
}

void buildheap(int a[])
{
int i;
for(i=n/2;i>=1;i--)
	heapify(a,i);
}

void main(){
int a[10],i,ch,del;

for(;;){

printf("\nEnter your choice \n 1.Create Heap \n 2.Delete \n 3.Exit\n");
scanf("%d",&ch);

switch(ch){
case 1: printf("\nEnter Number of elements :");
	scanf("%d",&n);
	printf("\nEnter elements: \n");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	buildheap(a);
	printf("\nElements after constructing heap :");
	for(i=1;i<=n;i++)
		printf("%d\t",a[i]);
	break;

case 2:
del=extract_max(a);

if(del!=-1)
	printf("\nElement deleted is %d",del);
printf("\nElements after deletion are:");

for(i=1;i<=n;i++)
	printf("%d\t",a[i]);
break;

default:exit(0);
}
}
}


