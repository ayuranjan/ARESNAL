/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package smallest;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class Smallest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int i=0 , n;
        int cube ;
        Scanner s = new Scanner((Readable) System.out);
        System.out.println("ENTER NUMBER OF TERMS: ");
        n = s.nextInt();
        for (i =0; i<= n;i++)
        {
            cube = i * i * i ;
            System.out.println("THE NUMBER IS "+ i);
            System.out.println("THE CUBE IS "+cube);
        
        }
    }
    
}
