/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pair_of_given_sum;

import java.util.HashMap;
import java.util.HashSet;

/**
 *
 * @author ayushranjan
 */
public class Pair_of_given_sum {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] = new int[]{3,2,8,15,-8};
        int sum =17 ;
        HashSet<Integer> hs = new HashSet<>();
        for(int i =0 ;i<arr.length;i++)
        {
          if(hs.contains(sum - arr[i]))
              System.out.println("true");
          hs.add(arr[i]);
        }
       
    }
    
}
