/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package prime;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class Prime {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] ar {
      
       int num;
       for(int i =1;i<= 500;i++)
       {
        int count =0;
        for (num =2;num <= i-1;num++)
        {
            if(i%num ==0)
                count = count +1 ;
            
        }
        if(count == 0 )
        {
            System.out.println(i);
        }
       }
      
    }
    
}
