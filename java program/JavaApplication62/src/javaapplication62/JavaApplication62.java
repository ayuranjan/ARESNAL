/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication62;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;

/**
 *
 * @author ayushranjan
 */
public class JavaApplication62 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
      System.out.println("the number of entries in the phone book");
      Scanner s = new Scanner(System.in);
       int contacts = s.nextInt();
       s.nextLine();
    Map<String, Integer> hm = new HashMap<String, Integer>();
    for(int i=0; i <contacts; i++)
    {
        String name = s.nextLine();
        int phone = s.nextInt();
        s.nextLine();
        hm.put(name, phone);
    }        
     for(Map.Entry m : hm.entrySet())
      {
          System.out.println(m.getKey() + " : " + m.getValue() );
      }
      
      for(int i =0 ;i< 3 ;i++)
      {
          String name = s.nextLine();
          if(hm.containsKey(name))
          {
          System.out.println(hm.get(name));
          }
          else {
              System.out.print("NOT FOUND ");
          }
      }
      
        
        
        
        
        
        
        
    }
    
}
