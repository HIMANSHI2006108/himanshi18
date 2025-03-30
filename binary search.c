#include<stdio.h>
#include<stdlib.h>
int binary(int[],int,int);
int binary_rec(int[],int,int,int);
void main()
{
	int a[]={10,20,30,40,50,60,70,77,88,99,111,125,234};
	int n=sizeof(a)/sizeof(int);
	int item=111;
	int result=binary_rec(a,0,n-1,item);
	if(result==-1)
	printf("Item Not Found");
	else
	printf("Element Fount at Index = %d",result);
}
/*int binary(int a[],int n,int item)
{
	int beg=0;
	int end=n-1;
	int mid;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(item==a[mid])
		return mid;
		if(item<a[mid])
		end=mid-1;
		else
		beg=mid+1;
	}
	return -1;
}*/
int binary_rec(int a[],int beg,int end,int item)
{
	int mid;
	if(beg<=end)
	{
	
		mid=(beg+end)/2;
		if(item==a[mid])
		return mid;
		else if(item<a[mid])
		return binary_rec(a,beg,mid-1,item);
		else
		return binary_rec(a,mid+1,end,item);
	}
	return -1;
}