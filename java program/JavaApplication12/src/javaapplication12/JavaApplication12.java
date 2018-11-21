/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication12;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class JavaApplication12 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int i , n;
        int cube ;
        Scanner s = new Scanner(System.in);
        System.out.println("ENTER NUMBER OF TERMS: ");
        n = s.nextInt();
        for (i =0; i<= n;i++)
        {
            cube = i * i * i ;
            System.out.println("THE NUMBER IS "+ i);
            System.out.println("THE CUBE IS "+cube);
        
        }// TODO code application logic here
    }
    
}
