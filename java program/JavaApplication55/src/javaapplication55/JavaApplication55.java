/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication55;

import java.util.Scanner;

/**
 *
 * @author ayushranjan
 */
public class JavaApplication55 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String greeting = "Hello \\ \"World\"";
        String s1 = "ayush is a bad boy";
        String s2 = "ayush";
        System.out.println(s1.replace(s2, "vikas"));
        System.out.println(s1.substring(2,5));
        System.out.println(greeting.concat(" From ") + "\'Ayush\'");
        System.out.println(Math.abs(-9.2));
        System.out.println(Math.random());
        int array[] = new int[20];
        
        int a[] = new int[]{1,2,3,4,5};
        System.out.println(a.length);
        System.out.println(fibo(6));
        NewClass nw = new NewClass();
        System.out.println(nw.fun(5));
        
    }
    static int fibo(int n)
    {
        if (n <=0)
            return n ;
        if(n ==1 )
            return 1 ;
        
        return fibo(n-1) + fibo(n-2);
    }
    
}
