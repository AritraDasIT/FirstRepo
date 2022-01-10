#include<stdio.h>

void bubble(int a[],int n)                     // function to implement bubble sort  
{
    int i , j , flag=0 ;
    int temp;
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
                
            }
        }
        
        if(flag==0)
        {
            break;
        }
    }
}


void print(int a[], int n)           //function to print array elements  
{
    int i ;
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}


int main()
{
    int a[5]={7,5,12,11,2};
    int n = 5 ;
    printf("Before sorting array elements are - \n");  
    print(a,n);
    bubble(a,n);
    printf("\nAfter sorting array elements are - \n");    
    print(a,n); 
}
