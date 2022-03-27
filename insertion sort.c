#include<stdio.h>

int n=6;

void insert(int a[], int n)              // function to sort an array with insertion sort 
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
        
        while(j>=0 && a[j]>temp)
        {
        	a[j+1]=a[j];
        	j--;
		}
		
		a[j+1]=temp;
	}
}

void display(int a[], int n)               //function to print the array 
{  
    int i;  
    for (i = 0; i < n; i++)  
      {
		  printf("%d ", a[i]);  
	}
}  
int main()
{
    int arr[6]={7,4,10,8,3,1};
  
    printf("Before sorting array elements are - \n");  
    display(arr, n);  
    insert(arr, n);  
    printf("\nAfter sorting array elements are - \n");    
    display(arr, n); 
}
  
