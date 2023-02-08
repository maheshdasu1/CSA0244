#include<stdio.h>
int main()
{
	int i,c,n;
	printf("enter the two numbers");
	scanf("%d%d",&i,&c);
	printf("enter your choice");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("add of %d & %d is %d",i,c,i+c);
			
		case 2:
		    printf("sub of %d & %d is %d",i,c,i-c);
		    
		case 3:
		    printf("multiply of %d & %d is %d",i,c,i*c);
			
		case 4:
		    printf("divide of %d & %d & %d is %d",i,c,i/c);
		case 5:
		    printf("power of %d & %d is %d",i,c,i^c);	
			defalt:
				printf("enter the choice");
				    
			
	}
}
	