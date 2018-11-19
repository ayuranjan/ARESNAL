
package arrayeg1;

import java.util.Scanner;


public class Arrayeg1 {

    
    public static void main(String[] args) {
       int arr[];
       
       System.out.println("ENTER THE NUMBER OF ELEMENTS IN ARRAY  ");
       Scanner s = new Scanner(System.in);
       int n = s.nextInt();
        arr = new int[n];
       System.out.println("Enter the numbers in the array:");
       for(int i=0;i<n;i++)
       {
           arr[i] = s.nextInt();
       }
       System.out.println("THE ARRAY IS ");
       for(int i =0;i<n;i++)
       {
           System.out.println(arr[i]);
       }
       
    }
    
}
