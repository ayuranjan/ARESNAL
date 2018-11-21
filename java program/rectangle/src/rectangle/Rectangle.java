/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package rectangle;

import java.util.*;
class area
{
void rect()
{ 
  double area ,l,b;
  Scanner s = new Scanner(System.in);
  System.out.println("Enter the length and breath ");
  l = s.nextDouble();
  b =s.nextDouble();
  area = l * b;
  System.out.println("AREA IS : " + area);
}
}
  
/**
 *
 * @author Ayush
 */
public class Rectangle {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
     area s = new area();
     {
         s.rect();
     }
    
    }
    
}
