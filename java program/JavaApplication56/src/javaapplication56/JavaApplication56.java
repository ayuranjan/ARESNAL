/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication56;

import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;


/**
 *
 * @author ayushranjan
 */
public class JavaApplication56 {

    /**
     * @param args the command line arguments
     */
    static int q =15;
    static{
         int p =10 ;
    }
    
    public static void main(String[] args) throws ParseException {
        // TODO code application logic here
            
        /*for(int i=0;i<3;i++)
            {
                String s1=sc.next();
                int x=sc.nextInt();
                System.out.println(s1 + x );
                //Complete this line
            }*/
      /*  String s1 = "syu";
        int x = 5 ;
        System.out.printf("%s %03d", s1, x);*/
        /*while(sc.hasNextLine())
        {
            String s = sc.nextLine();
            System.out.println(s);
            
        }*/
      
        //System.out.println(q);
        String s = "welcometojava";
        ArrayList<String> str =  new ArrayList<String>() ;
        int k= 3 ;
        for(int i=0;i<s.length()-k+1;i++)
        {
            String s1 = s.substring(i,i+k);
            str.add(s1);
            
           
        }
        System.out.println(Arrays.toString(str.toArray()));
        Collections.sort(str);
        System.out.println(Arrays.toString(str.toArray()));
        System.out.println(str.get(0));
        System.out.println(str.get(str.size()-1));
        
        
        
   
        
    }
    
}