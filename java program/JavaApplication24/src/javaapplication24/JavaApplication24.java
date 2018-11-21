/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication24;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class JavaApplication24 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int n , i,sum =0;
        System.out.println("Enter the number :");
      
        Scanner s = new Scanner(System.in);
        n = s.nextInt();
        while(n >0  )
        {
           i = n % 10 ;
       
           sum = sum + i;
           n = n /10;
           
           
        }
        System.out.println(sum);// TODO code application logic here
    }
    
}
