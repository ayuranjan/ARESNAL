/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package reverse;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class Reverse {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       int n,rev =0;
               
       System.out.println("Enter the number : ");
       Scanner s = new Scanner(System.in);
       n = s.nextInt();
       
       while(n > 0 )
       {
           rev = rev * 10;
           rev = rev + n % 10;
           n = n /10;
       }   
       System.out.println(rev);
       // TODO code application logic here
    }
    
}
