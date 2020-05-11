/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package frequency_limited_range;

import java.util.HashMap;

/**
 *
 * @author ayushranjan
 */
public class Frequency_limited_range {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] = new int[]{2,3,3,2,5,7,};
        HashMap<Integer,Integer> hm = new HashMap<>();
          for (int i = 0; i < arr.length; i++) 
        { 
            if (hm.containsKey(arr[i]))  
            { 
                hm.put(arr[i], hm.get(arr[i]) + 1); 
            }  
            else
            { 
                hm.put(arr[i], 1); 
            } 
        
        }
        for (HashMap.Entry<Integer, Integer> entry : hm.entrySet()) 
        { 
            System.out.println(entry.getKey() + " " + entry.getValue()); 
        }
    }
    
}
