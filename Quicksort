
#include<stdio.h>

void quicksort(int arr[],int lb, int ub)         //function for sort
{
	int loc ; 
	if(ub>lb)
	{
		loc= partition(arr,lb,ub);
		quicksort(arr,lb,loc-1);
		quicksort(arr,loc+1,ub);	
	}
}

int partition(int arr[],int lb,int ub)                //function for partition
{
	int pivot , start,end ;
	
	pivot=arr[lb];
	start=lb;
	end=ub;
	
	while(start<end)
	{
		while(arr[start]<=pivot)
		{
			start++;	
		}
		while(arr[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(&arr[start],&arr[end]);
		}
	}
	swap(&arr[lb],&arr[end]);
	return end ; 
}

void swap(int *a , int *b)               //function for swapping by pointers
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;	
}

void print(int arr[],int n)            // print the array
{ 
    int i;
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
	}
}


int main()
{
	int a[]={10,7,8,12,14,5,3,1};
	int n = sizeof(a)/sizeof(a[0]);
	printf("Unsorted array:\n");
	print(a,n);
	quicksort(a,0,n-1);
	printf("\nsortd array:\n");
	print(a,n);
}
