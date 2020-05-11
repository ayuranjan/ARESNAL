/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication67;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Scanner;

/**
 *
 * @author ayushranjan
 */
public class JavaApplication67 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner s =new Scanner(System.in);
        HashSet<String> hs = new HashSet<>();
        String arr[] = new String[10];
        String str = s.nextLine();
        arr = str.split(" ");
        int max = 0 ;
        for(int i =0 ;i< 5 ;i++)
        {
            
            hs.add(arr[i]);
            hs.add(arr[i+1]);
            
            if (max < hs.size())
                    {
                        max = hs.size();
                    }
        }
        System.out.print(max);
        
        
        
    }
    
}
