/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package first_repeating_element;

import java.util.HashSet;
import java.util.Scanner;

/**
 *
 * @author ayushranjan
 */
public class First_repeating_element {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Scanner s = new Scanner(System.in);
        int n = 7 ;
        int arr[] = new int[7];
        System.out.print("Enter the elements :");
        for(int i =0 ;i<n;i++)
        {
            arr[i] = s.nextInt();
        }
        boolean flag = true ;
        HashSet<Integer> hs= new HashSet<>();
        for(int i =0 ;i<arr.length;i++)
        {
            flag = hs.add(arr[i]);
            if(!flag)
            {
                System.out.print(arr[i]);
                break;
            }
        }
        
        
        
    }
    
}
