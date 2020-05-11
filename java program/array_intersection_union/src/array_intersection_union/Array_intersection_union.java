/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package array_intersection_union;

import java.util.HashSet;

/**
 *
 * @author ayushranjan
 */
public class Array_intersection_union {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr1[] = new int[]{15,20,5,15,18,19,77};
        int arr2[] = new int[]{15,15,15,20,10,17,14};
        int n = arr1.length;
        int m = arr2.length;
        HashSet<Integer> hs = new HashSet<>();
        
        for(int i =0 ;i<n;i++)
        {
            hs.add(arr1[i]);
        }
        for(int i=0;i<m;i++)
        {
            hs.add(arr2[i]);
        }
        
        
        System.out.print("Intesection of both array will have :" + hs.size());
        
        
         // now let's see how many elements are there in intersection 
         HashSet<Integer> hs1 = new HashSet<>();
         for(int i =0 ;i<n ;i++)
         {
             hs1.add(arr1[i]);
         }
         System.out.println();
         for(int i =0;i<m;i++)
         {
             if(hs1.contains(arr2[i]))
             {
                 System.out.print(arr2[i] + " ");
                 hs1.remove(arr2[i]);
             }
         }
        
        
        
        }
    
    
    
    
    
    
    
}
