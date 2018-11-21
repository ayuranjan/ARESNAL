/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication26;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class JavaApplication26 {

    /**1
     * @param args the command line arguments
     */
    public static void main(String[] args) {
         int n,rev =0;
               
       System.out.println("Enter the number : ");
       Scanner s = new Scanner(System.in);
       n = s.nextInt();
       int a ;
       a =n;
       while(n > 0 )
       {
           rev = rev * 10;
           rev = rev + n % 10;
           n = n /10;
       }   
       System.out.println(rev);
      if (a == rev)
      {
          System.out.println("ITS PALLINDROME");
      }
          else 
      {      
          System.out.println("ITS NOT A PALLINDROME");
      }
      
    }
    
}
