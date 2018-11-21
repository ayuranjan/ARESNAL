/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication14;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class JavaApplication14 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        long binary1 , binary2;
        int i = 0, n, remainder = 0;
       int[] sum = new int[20];
       Scanner s = new Scanner(System.in);
       
       System.out.println("ENTER THE 1ST BINARY NUMBER:");
       binary1 = s.nextLong();
       System.out.println("ENTER THE 2ND BINARY NUMBER :");
       binary2 = s.nextLong();
         
       while(binary1 != 0 || binary2 != 0)
       {
             sum[i++] =(int) ( binary1/10 + binary2/10 +remainder )%2 ;
             remainder  = (int) (binary1 /10 + binary2/10  +remainder)/2;
             binary1 = binary1/10;
             binary2 = binary2 / 10;
       }     
        if(remainder != 0)
        {
         sum[i++] = remainder;
        }
        --i;
        System.out.println("SUM OF 2 BINARY NUMBER IS :");
        while( i>= 0 )
        {
          System.out.println(sum[i]);
          --i;
        }
       
        
        
        
        
        // TODO code application logic here
    }
    
}
