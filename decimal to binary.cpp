#include<stdio.h>
int main()
{
	int n,a[20],i,j;
	printf("enter any number\n");
	scanf("%d",&n);
	for(i=0;n>0;i++)
	{
	  a[i]=n%2;
	  n=n/2;
    }
    printf("the binary number is\n");
    for(j=i-1;j>=0;j--)
    {
    	printf("%d",a[j]);
	}
}