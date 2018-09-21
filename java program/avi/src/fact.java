/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Ayush
 */
public class fact {
     public int factorial(int a )
      {
          if (a == 1)
              return 1;
          else
              return a*factorial(a-1);
      }
              
    
}
