#include<stdio.h>
#include<stdlib.h>
int linear(int[],int,int);
void main()
{
	int a[]={99,33,44,55,66,11,22,676,88,12,45,6};
	int n=sizeof(a)/sizeof(int);
	int item=66;
	int result=linear(a,n,item);
	if(result==-1)
	{
		printf("Item Not Found");
	}
	else
	{
		printf("Item found at Index = %d",result);	
	}
}
int linear(int a[],int n,int item)
{
	if(item==a[n-1])
	return n-1;
	else if(n==0)
	return -1;
	else
	return linear(a,n-1,item);
}