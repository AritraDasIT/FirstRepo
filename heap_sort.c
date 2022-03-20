#include<stdio.h>

void max_heapify(int arr[],int n , int i)
{
	int large,l,r;
	
	large=i;
	l=(2*i);
	r=(2*i)+1;
	
	if((l<n) && arr[l]>arr[large])
	{
		large=l;
	}
	if((r<n) && (arr[r]>arr[large]))
	{
		large=r;
	}
	if(large!=i)
	{
		int temp ;
		temp=arr[i];
		arr[i]=arr[large];
		arr[large]=temp;
		max_heapify(arr,n,large);
		
	}
}

void heap_sort(int arr[],int n)
{
	int i , temp;
	for(i=n/2-1;i>=0;i--)
	{
		max_heapify(arr,n,i);
	}
	for(i=n-1;i>=0;i--)
	{
		temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		max_heapify(arr,i,0);
		
	}
}

void print(int arr[],int n)
{
	int i ;
	
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
}

int main()
{
	int arr[]={10,9,8,7,6,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Before sorting");
	print(arr,n);
	heap_sort(arr,n);
	printf("\n After sorting");
	print(arr,n);
	
	
}
