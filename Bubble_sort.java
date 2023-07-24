import java.util.Scanner;

 public class Main{
     
    public static void sort(int arr[])
    {
        int i , j , temp , n ;
        
        n=arr.length;
        
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp= arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    
    public static void display(int arr[])
    {
        int i , n ;
        n=arr.length;
        
        for(i=0;i<n;i++)
        {
            System.out.println(arr[i]+ " ");
        }
    }

public static void main(String[] args) {
int n,i;
Scanner s = new Scanner(System.in);
System.out.print("Enter number of elements in the array:");
n = s.nextInt();
int a[] = new int[n];
System.out.println("Enter "+n+" elements ");
for( i=0; i < n; i++)
{
a[i] = s.nextInt();
}
 
System.out.println( "elements in array ");
display(a);
sort(a);
System.out.println( "\nelements after sorting");
display(a);
	}
}
