/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package constructoroverloading;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
class add
{
    
    int i,j,c;
    add() 
    {
        
    }
    add(int i ,int j )
     {
         
         int sum = i+j ;
          System.out.println("real part is "+sum);
     }
    add(int i,int j,int  c )
     {
         
         int sum2 = i+j;
          System.out.println("imaginary part is: " +'i'+sum2);
     }
    
    
}
public class Constructoroverloading {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      System.out.println("ENTER THE 1st complex  number in form of a + ib . Enter the value of a & b:");
      Scanner s = new Scanner(System.in);
      
      int a1 = s.nextInt();
      int b1 = s.nextInt();
      
      System.out.println("ENTER THE 2nd complex  number in form of a + ib . Enter the value of a & b:");
      
      
      int a2 = s.nextInt();
      int b2 = s.nextInt();
      
      int  c =0;
      add a =new add(a1,a2);
      add b = new add(b1,b2,c);
      
      
      
      
       
    }
    
}
