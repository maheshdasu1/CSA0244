#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[10];
int i;
for(i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
printf("Reversed array is");
for(i = n-1; i >= 0; i--)
{
printf("%d",arr[i]);
}
}