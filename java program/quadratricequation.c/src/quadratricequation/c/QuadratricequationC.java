/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package quadratricequation.c;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class QuadratricequationC {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      double a,b,c,d;
       double root1,root2;
       System.out.println("ENTER THE QUADRATIC IN FORM OF ax^2+bx+c . Enter values of a ,b,c");
       Scanner s =new Scanner(System.in);
       a = s.nextDouble();
       b = s.nextDouble();
       c =s.nextDouble();
       
       
       double sq;
       d = (b*b )- (4 *a *c) ;
       System.out.println(d);
       if ( d>=0 )
       {
           sq = Math.sqrt(d);
           root1 =(-b+sq) / (2*a);
           root2 = (-b-sq) / ( 2*a);
           System.out.println(root1);
           System.out.println(root2);
           
           
           
       }
       else 
           System.out.println("NO REAL ROOTS ");
           
    }
}
       
       
       
       
   