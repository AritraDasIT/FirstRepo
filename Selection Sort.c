#include<stdio.h>

int n=6;

void selection(int a[],int n)           //function for sorting
{
    int i , j , min , swap ;
	
	for(i=0;i<n-1;i++)
	{
		min=i;               ////minimum element in unsorted array
		
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		
		if(min!=i)
		{
		    swap=a[i];
		    a[i]=a[min];
		    a[min]=swap;                   // Swap the minimum element with the first element  
			
		}
	}
}
void display(int a[], int n)             // function to print the array 
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  

int main()
{
	
    int arr[6]={7,4,10,8,3,1};
  
    printf("Before sorting array elements are - \n");  
    display(arr, n);  
    selection(arr, n);  
    printf("\nAfter sorting array elements are - \n");    
    display(arr, n); 
}
