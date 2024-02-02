import java.util.*;

public class Main
{   // function for sorting

    public static void Sort(int arr[])
    {
        int  n = arr.length;
        
        for(int i=0 ; i<n-1;i++)
        {
            int smallest=i;
            
            for(int j=i+1; j<n;j++)
            {
                if(arr[smallest]>arr[j])
                {
                    smallest=j;
                }
            }
            int temp=0;
        
        //swap
        
        temp=arr[smallest];
        arr[smallest]=arr[i];
        arr[i]=temp;
        }
        
        
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
		Sort(arr);
		System.out.println("Elements after Sorting: ");
		display(arr);

		
	}
    
    
}
