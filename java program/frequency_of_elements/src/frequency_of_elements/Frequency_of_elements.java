/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package frequency_of_elements;

import java.util.HashMap;

/**
 *
 * @author ayushranjan
 */
public class Frequency_of_elements {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[]= new int[]{1,4,7,9,4,5,5,7,9,7};
        HashMap<Integer,Integer> hm = new HashMap<>();
        for(int i =0;i<arr.length;i++)
        {
            
            if(hm.containsKey(arr[i]))
            {
                int f = hm.get(arr[i]);
                hm.put(arr[i], ++f);
            }
            else 
            {hm.put(arr[i], 1);}
        }
        for(HashMap.Entry<Integer,Integer> e : hm.entrySet())
        {
            System.out.println(e.getKey() + ":"+ e.getValue());
            
           
        }
    }
    
}
