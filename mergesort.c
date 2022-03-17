#include<stdio.h>

void merge(int arr[100],int lb,int mid,int ub)      //merge function
{
	int i , k , j;
	int b[100];
	i=lb;
	j=mid+1;
	k=lb;
	
	while((i<=mid && j<=ub))
	{
		if(arr[i]<=arr[j])
		{
			b[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			b[k]=arr[j];
			j++;
			k++;
		}
	}
	while(j<=ub)
		{
			b[k]=arr[j];
			j++;
			k++;
		}
	

	while(i<=mid)
		{
			b[k]=arr[i];
			i++;
			k++;
		}
	for(k=lb;k<=ub;k++)
	{
		arr[k]=b[k];
	}
}

void merge_sort(int arr[100],int lb, int ub)             //function to sort
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		merge_sort(arr,lb,mid);
		merge_sort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);	
	}
}

void print(int arr[100],int n)                  //display function
{
	int i ;
	for(i=0;i<n;i++)
	{
		printf(" %d ",arr[i]);
    } 
}

int main()
{
	int arr[100];
	int n ,i;
	printf("Enter the number of array elemts:");
	scanf("%d",&n);
	printf("Enter the array elemnets:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Before sorting the array elements are:\n");
	print(arr,n);
	merge_sort(arr,0,n-1);
	printf("\nAfter sorting the array elements are:\n");
	print(arr,n);	
}

