/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package factorialusingrecursion;
import java.util.Scanner;
 



public class Factorialusingrecursion {

    public static void main(String[] args) {
        int num;
        Scanner s =new Scanner(System.in);
        System.out.println("Enter the number:");
        num = s.nextInt();
        
     
        
       fact f = new fact();
     int  result = fact.factorial(num);
        System.out.println(result);
        
        
    }
    
}


 class fact
  {
      static int factorial(int a )
      {
          if (a == 1)
              return 1;
          else
              return a*factorial(a-1);
      }
              
  }



