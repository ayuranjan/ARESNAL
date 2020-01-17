/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package trylabpa;

import java.util.Scanner;

class input extends Thread
{
   double a[] =new double[5];
    public void start()
    {
        
        System.out.println("ENTER 5 INPUTS ");
        Scanner s =new Scanner(System.in);
   for(int i =0;i<5;i++)
   {
      a[i] =s.nextDouble();
   }

          
    }
    public void check()
    {
        for(int i =0;i<5;i++)
    {
            if(a[i] ==(int) a[i])
            {
                System.out.println("checked");
            }
            else 
            {
                System.out.println(" atleast a value is not integer");
            }
    }
    }
}
    
public class Trylabpa {

    public static void main(String[] args) {
        input t1 =new input();
       input t2 =new input();
       t1.start();
       t2.start();
       input t3 = new input();
       t3.check();
       
    }
    
}
