#include<stdio.h>
#include<stdlib.h>
#define S 10

int i,a[10];

void insert(int item){
int j,c=0;
i=item%S;

if(a[i]==-1)
	a[i]=item;
else{
	for(j=(i+1)%S;c<S;j=(j+1)%S,c++)
		if(a[j]==-1){
			a[j]=item;
			return;
		}
	if(c==S){
		printf("\nError:Full\n");
		exit(0);
	}
}

}

void delete(int item){
int c=0;
i=item%S;

if(a[i]==item){
	printf("The element %d is deleted",a[i]);
        a[i]=-1;
	return;
}
else{
        for(i=(i+1)%S;c<S;i=(i+1)%S,c++)
                if(a[i]==item){
			printf("The element %d is deleted",a[i]);
                        a[i]=-1;
                        return;
                }
        if(c==S){
                printf("\nError:Element not found\n");
                exit(0);
        }
}

}
	

void search(int item){
int c=0;
i=item%S;

if(a[i]==item){
        printf("Element %d is present at %d.",a[i],i);
        return;
}
else{
        for(i=(i+1)%S;c<S;i=(i+1)%S,c++)
                if(a[i]==item){
                        printf("Element %d is present at %d.",a[i],i);
                        return;
                }
        if(c==S){
                printf("\nError:Element not found\n");
                exit(0);
        }
}

}

void main(){
int ch,item;

for(i=0;i<S;i++)
        a[i]=-1;

for(;;){
printf("PRESS \n 1 for Insert\n 2 for Deleting\n 3 for Display\n 4 for Searching an Element\n 5 for Exit.\n");
printf("Enter Your Choice:\n");
scanf("%d",&ch);
getchar();
switch(ch){
case 1: printf("\nEnter the element :");
	scanf("%d",&item);
	insert(item);
	break;
case 2: printf("\nEnter the element to be deleted :");
	scanf("%d",&item);
	delete(item);
	break;
case 3: printf("Elements of the hash Table are:");
	for(i=0;i<S;i++)
		if(a[i]!=-1)
			printf("%d  is at  %d\n",a[i],i);
	break;
case 4: printf("Enter the element to be searched :");
	scanf("%d",&item);
	search(item);
	break;
default:exit(0);

}
}
}

