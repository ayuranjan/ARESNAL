/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hackerrankeg;

import java.util.Scanner;
import java.lang.Math; 

/**
 *
 * @author ayushranjan
 */
public class Hackerrankeg {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      Scanner s = new Scanner(System.in);
       int t =s.nextInt();
       int count=0;
      do
       {     
      int a,b,n;
      a = s.nextInt();
      b = s.nextInt();
      n = s.nextInt();
      double val = a;
      for( int i =0 ;i<n;i++)
      {
          
          val = val +  (Math.pow(2,i)*b) ;
          
          System.out.print((int)val +"  ");
          
      }
      count ++;
    }while(count == t);
    }
    
}
