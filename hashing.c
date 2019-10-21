#include<stdio.h>
#include<stdlib.h>
#define S 10

int i,a[S];

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
int j,c=0;
i=item%S;

if(a[i]==item){
        a[i]=-1;
	return;
}
else{
        for(j=(i+1)%S;c<S;j=(j+1)%S,c++)
                if(a[i]==item){
                        a[i]=-1;
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
printf("PRESS \n 1 for Insert\n 2 for Deleting\n 3 for Display\n 4 for Exit.\n");
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
default:exit(0);

}
}
}

