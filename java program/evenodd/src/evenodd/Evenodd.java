/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package evenodd;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class Evenodd {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      int num;
      System.out.println("ENTER THE NUMBER ");
      Scanner s = new Scanner(System.in);
      num = s.nextInt();
      if (num % 2 == 0 )
      {    
       System.out.println("ITS A EVEN NUMBER ");
        
      }
      else
          System.out.println("ITS AN ODD NUMBER");
      
    }
    
}
