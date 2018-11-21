/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication25;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class JavaApplication25 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
     int n , i,cube,digit =0;
        System.out.println("Enter the number :");
      
        Scanner s = new Scanner(System.in);
        n = s.nextInt();
        while(n >0  )
        {
    
           
           n = n /10;
           digit = digit +1 ;
           
           
           
        }
        System.out.println(digit);   // TODO code application logic here
    }
    
}
