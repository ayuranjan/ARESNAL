/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package example;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class Example {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int age;
        System.out.println("Enter your age:");
        Scanner s =new Scanner(System.in);
        age = s.nextInt();
        if ( age > 18 )
           System.out.println("you are eligible to vote ");
        else 
            System.out.println("you are not eligible to vote");
        
        // TODO code application logic here
    }
    
}
