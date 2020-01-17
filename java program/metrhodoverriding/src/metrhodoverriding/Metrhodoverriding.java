/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package metrhodoverriding;

import java.util.Scanner;

/*class A
{
    protected void display()
    {
        System.out.println("ayush ranjan");
    }
    void print()
    {
            System.out.println("Ranjana Jha");
            }
}
class B extends A
{
    public void display()
    {
        System.out.println("vikas raunak");
    }
}*/
class C
{
    public static void show(int a, int b) {
         System.out.println(a+b);
    }
}
class D extends C
{
     public static void show(int a, int b) {
         System.out.println(a*b);
    }
}
public class Metrhodoverriding {

    
    public static void main(String[] args) {
       // C c =new D();
       // c.show(7,1);
       Scanner s =new Scanner(System.in);
       String s1 ,s2;
       System.out.println("ENTER 2 STRINGS ");
       s1 = s.nextLine();
       //s2 = s.nextLine();
       s1 = s1.trim();
       //s2 = s2.trim();
       //System.out.println(s1.equalsIgnoreCase(s2));
       //System.out.println(s1.startsWith("u", 5));
      // System.out.println(s1.compareToIgnoreCase(s2));
       System.out.println(s1.substring(11));
        s1 = s1.replace("a","v");
       System.out.println(s1);
        
        
    }
    
}
