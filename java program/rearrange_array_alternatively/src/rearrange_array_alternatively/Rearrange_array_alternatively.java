/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package rearrange_array_alternatively;

/**
 *
 * @author ayushranjan
 */
public class Rearrange_array_alternatively {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] = new int[]{1,2,3,4,5};
        int min_index =0 ,max_index = arr.length -1 ;
        int max = arr[max_index] +1 ;
        for(int i =0 ;i<arr.length;i++)
        {
            if(min_index >max_index)
            {
                break;
            }
            else if(i%2 ==0)
            {
                arr[i] = arr[i] +( arr[max_index] %max ) * max ;
                max_index -- ;
            }
            else {
                arr[i] = arr[i] + (arr[min_index]%max)*max;
                min_index ++ ;
        }      
    }
        
        for(int i : arr)
        {
            System.out.print( i/max + " ");
        }
    }
}
