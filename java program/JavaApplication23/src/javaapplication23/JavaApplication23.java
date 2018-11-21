/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication23;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class JavaApplication23 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int n , i,cube,sum =0;
        System.out.println("Enter the number :");
      
        Scanner s = new Scanner(System.in);
        n = s.nextInt();
        int a =n;
        while(n >0  )
        {
           i = n % 10 ;
           cube  = i*i*i;
           sum = sum + cube;
           n = n /10;
           
           
        }
        System.out.println(sum);
        if(sum == a)
            System.out.println("THE NUMBER IS ANGSTROM");
        else 
            System.out.println("THE NUMBER IS NOT ANGSTROM");
    }
    
}
