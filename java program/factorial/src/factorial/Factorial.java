/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package factorial;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class Factorial {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int num;
        int factorial=1;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter the number");
        num = s.nextInt();
        while (num != 0)
        {
          
           factorial = factorial * num;
           num = num -1;
           
        }
        System.out.println(factorial);
    } 
}

    

