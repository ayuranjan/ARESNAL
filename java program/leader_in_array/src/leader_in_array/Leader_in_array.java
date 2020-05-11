/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package leader_in_array;

import java.util.ArrayList;

/**
 *
 * @author ayushranjan
 */
public class Leader_in_array {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int a[] = new int[]{2,3,10,6,4,8,1};
        int max = -1 ;
        ArrayList<Integer> l = new ArrayList<Integer>();
        
       for(int i=a.length-1;i>=0;i--)
        {
            if(a[i]> max)
            {
                l.add(0,a[i]);
                max = a[i];
            }
        }
       
       for(int i : l)
       {
           System.out.print(i + " ");
       }
            
    }
    
}
