/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package distancebtwpoints;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class Distancebtwpoints {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       int x1,x2,y1,y2,dis,total;
       System.out.println("ENTER THE COORDINATES of 1st points");
       Scanner s = new Scanner(System.in);
       x1 = s.nextInt();
       y1 = s.nextInt();
       System.out.println("ENTER THE COORDINATES of 2nd points");
       
       x2 = s.nextInt();
       y2 = s.nextInt();
         
       
       int total1 = (x2 -x1) * (x2-x1);
       int total2 = (y2 -y1 ) * (y2 -y1);
       total = total1 + total2 ;
        double root = Math.sqrt(total);
        System.out.println(root);
       
      
       
       
       
       
    }
    
}
