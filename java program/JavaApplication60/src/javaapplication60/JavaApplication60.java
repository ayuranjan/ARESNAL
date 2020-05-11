/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication60;

import java.util.HashMap;

/**
 *
 * @author ayushranjan
 */
public class JavaApplication60 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic hereString a = "ayush";
        //String a ="ayush";
        String b ="usbay";
        int c[] = new int[26], d[] = new int[26];
        /*boolean flag = true ;
        
        if(a.length() != b.length()) 
        { flag = false ;
            System.out.print("no");}
        else{
        int c[] = new int[26], d[] = new int[26] ;*/
        //a = a.toUpperCase();
        /*b = b.toUpperCase();
        for(int i=0; i<a.length(); i++){
            c[a.charAt(i) - 'A']++;
            d[b.charAt(i) - 'A']++;
        }
        System.out.print('Z' + 'A' );
        for(int i =0;i<26; i++)
            if(c[i] != d[i] ) 
            { flag = false ;
                System.out.println("NO");
                break ;}}
        if(flag)
        {
        System.out.println("Yes");}
        HashMap<Character, Integer> m = new HashMap<Character, Integer>();*/
        String str = "23.45.22.32."; 
        boolean flag = true ;
        if(str.endsWith("."))
        {
            System.out.println("false");
            flag = false ;
        }
        if(str.startsWith("."))
        {
            System.out.print("false");
            flag = false ;
            
        }
        String arr[] = str.split("\\."); 
        
        if(arr.length != 4)
        {
            System.out.println("false");
            flag = false ;
        }
        else 
        {
            for(String s : arr)
            {
                if(s.length() >  3 )
                {
                    System.out.println("false");
                    flag = false ;
                    break;
                }
                else 
                {
                    int i=Integer.parseInt(s); 
                    
                    if (i >255 || i <0)
                    {
                        System.out.println("False");
                        flag = false ;
                        break;
                    }
                }
            }
        }
        
        if(flag)
        {
            System.out.println("true");
        }
        
    }
}
