/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package inputoutput;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class Inputoutput {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int age ;
        String name  = new String();
        
        System.out.print("Enter the name  :");
        Scanner s = new Scanner(System.in);
        name = s.nextLine();
        System.out.print(name);
        // TODO code application logic here
    }
    
}
