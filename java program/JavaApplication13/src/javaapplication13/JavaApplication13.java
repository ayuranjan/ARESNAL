/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication13;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class JavaApplication13 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int i,count =0;
        Scanner s = new Scanner(System.in);
        System.out.println("ENTER THE STRING:");
       String a = new String();
        a = s.nextLine();
        int length = a.length();
        for(i=0;i<=length;i++)
        {
            if (a.charAt(i) == 'a' || a.charAt(i) == 'e' || a.charAt(i) == 'i'
                    || a.charAt(i) == 'o' || a.charAt(i) == 'u')
                    count++; 
        }
        System.out.println("Number of vowels "+count);
        
        // TODO code application logic here
    }
    
}
