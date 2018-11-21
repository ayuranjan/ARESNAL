/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication18;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class JavaApplication18 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        double minutes ;
        int years ,days;
        Scanner s = new Scanner(System.in);
        
        System.out.println("ENTER THE MINUTES:");
        minutes = s.nextDouble();
         years = (int ) minutes / (60*24*365) ;
         days =  (int) (minutes / (60*24)) %365 ;
          
         System.out.println("total number of years are "+ years +"and days are"+days);
         
         
        
        // TODO code application logic here
    }
    
}
