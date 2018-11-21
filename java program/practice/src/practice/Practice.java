/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practice;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class Practice {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
       int radius ;
       float area, perimeter ;
       Scanner s = new Scanner(System.in);
       System.out.println("ENTER THE RADIUS:");
       radius = s.nextInt();
       area = (float) (3.14 * radius * radius) ;
       perimeter = (float) (2 * 3.14 * radius);
       System.out.println("AREA IS "+area);
       System.out.println("perimeter is "+perimeter);
    }
}
