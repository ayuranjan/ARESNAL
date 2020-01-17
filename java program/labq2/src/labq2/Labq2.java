/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package labq2;

import java.util.Scanner;
import static jdk.nashorn.internal.objects.NativeRegExp.test;

class input extends Thread
{
   double a[] =new double[5];
    public void run()
    {
        
        System.out.println("ENTER 5 INPUTS ");
        Scanner s =new Scanner(System.in);
   for(int i =0;i<5;i++)
   {
      a[i] =s.nextDouble();
   }

          
    }
    public void start()
    {
        for(int i =0;i<5;i++)
    {
            if(a[i] ==(int) a[i])
            {
                System.out.println("checking");
            }
            else 
            {
                System.out.println(" atleast a value is not integer");
            }
    }
    
}


public class Labq2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       input t1 =new input();
       input t2 =new input();
       t1.start();
       t2.start();
       input t3 = new input();
       
       
       
    }
    
}
