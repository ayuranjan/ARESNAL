/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication61;

import java.util.ArrayList;
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;


/**
 *
 * @author ayushranjan
 */
public class JavaApplication61 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int N = 5 ;
        Scanner s= new Scanner(System.in);
        
        ArrayList p[] = new ArrayList[N];
        for(int i=0;i<N;i++)
        {
            int d = s.nextInt();
             p[i] = new ArrayList();
            for(int j=0;j<d;j++)
            {  
                p[i].add(s.nextInt());                
        }
    }

    }
   
    
}
