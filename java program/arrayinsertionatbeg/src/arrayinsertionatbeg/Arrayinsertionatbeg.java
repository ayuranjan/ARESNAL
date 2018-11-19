
package arrayinsertionatbeg;

import java.util.Scanner;


public class Arrayinsertionatbeg {

   
    public static void main(String[] args) {
        int n, x;
        Scanner s = new Scanner(System.in);
        System.out.print("Enter no. of elements you want in array:");
        n = s.nextInt();
        int a[] = new int[n+1];
        System.out.println("Enter all the elements:");
        for(int i = 0; i < n; i++)
        {
            a[i] = s.nextInt();
        }
       
        System.out.print("Enter the element you want to insert:");
        x = s.nextInt();
        for(int i = (n-1); i >= 0; i--)
        {
            a[i+1] = a[i];
        }
        a[0] = x;
        System.out.print("After inserting:");
        for(int i = 0; i < n+1; i++)
        {
            System.out.print(a[i]+",");
        }
    }
    
}


