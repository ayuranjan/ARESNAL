
package exampreps;

import java.util.Scanner;


public class Exampreps {

   
    public static void main(String[] args) {
       System.out.println("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY");
       int n,i;
       Scanner s = new Scanner(System.in);
       n= s.nextInt();
       int arr[] =new int[n];
       System.out.println("Enter the numbers in the array");
       for(i=0;i<n;i++)
       {
           arr[i] =s.nextInt();
       }
       System.out.println("THE ARRAY IS ");
           for(i =0;i<n;i++)
           {
               System.out.println(arr[i]);
           }
       
       
           
       
    }
    
}
