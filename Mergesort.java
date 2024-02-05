import java.util.*;

public class Main
{   
    public static void conquer(int arr[],int si ,int mid ,int ei)
    {
        int merge[]= new int[ei-si+1];         // new Array
        int index1=si;       //track 1st Array
        int index2=mid+1;    //track 2nd Array
        
        int x=0;          // track the index of new merge Array
        
        while(index1<=mid && index2<=ei)
        {
            if(arr[index1]<=arr[index2])
            {
                merge[x]=arr[index1];
                x++;
                index1++;
            }
            else
            {
                merge[x++]=arr[index2++];  
            }
        }
        
        while(index1<=mid)
        {
            merge[x++]=arr[index1++];
        }
        
        while(index2<=ei)
        {
            merge[x++]=arr[index2++];
        }
        
        for(int i=0,  j=si; i<merge.length;i++, j++)            // copy form new array -> original array
        {
            arr[j]=merge[i];
        }
    }
    
    
    
    
    // function for Divide

    public static void Divide(int arr[],int si, int ei)        // (Array , starting Index , end index)
    {
       if(si>=ei)           // when single element left
       { 
           return;
       }
       
        int mid = (si+(ei-si)/2);                   //   means (si+ei)/2
        Divide(arr,si,mid);        //recursive call
        Divide(arr,mid+1,ei);
        
        conquer(arr,si,mid,ei);
        
        
    }
    
    // function for display
    
    public static void display(int arr[])
    {
        int n = arr.length;
        
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");  
        }
        
        System.out.println();
    }
    
    
    
    public static void main(String[] args) {
        
        
        
        
        Scanner scan = new Scanner(System.in);
        
		System.out.println("Enter the length of the array: ");
		int n= scan.nextInt();
		
		int arr[]= new int[n];
		
		System.out.println("Enter the array elements: ");
		
		for(int i=0;i<n;i++)
		{
		    arr[i]= scan.nextInt();
		}
		
		System.out.println("Elements before Sorting: ");
		display(arr);
		Divide(arr,0,n-1);
		System.out.println("Elements after Sorting: ");
		display(arr);

		
	}
    
    
}
