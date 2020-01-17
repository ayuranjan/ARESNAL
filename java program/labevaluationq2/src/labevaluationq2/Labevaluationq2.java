/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package labevaluationq2;

import java.util.Scanner;

class input extends Thread
{
    String arr[] =new String[5];
    Scanner s = new Scanner(System.in);
    public void run()
    {
        System.out.println("ENTER THE 5 NUMBER");
        for(int i = 0;i<5;i++)
            arr[i] = s.nextLine();
        System.out.println("**************");
        for(int i=0;i<5;i++)
            System.out.println(arr[i]);
            
    }
}

/*class input2 extends Thread
{
    String arr2[] =new String[5];
    Scanner s = new Scanner(System.in);
    public void run()
    {
        System.out.println("ENTER THE 5 NUMBER");
        for(int i = 0;i<5;i++)
            arr2[i] = s.nextLine();
        System.out.println("**************");
        for(int i=0;i<5;i++)
            System.out.println(arr2[i]);
            
    }
}*/
class check extends Thread
{
    
}

public class Labevaluationq2 {

    
    public static void main(String[] args) {
       
        input i1 = new input();
        input i2 = new input();
        i1.start();
        i2.start();
    }
    
}
