/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package array_reversal;

/**
 *
 * @author ayushranjan
 */
public class Array_reversal {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] = new int[]{1,2,3,4,5,6,7};
        for(int i : arr)
            System.out.print(i + " ");
        System.out.println("");
        System.out.print("Array after reversal is  :");
        int low = 0 , high = arr.length - 1 ;
        while(low < high)
        {
            int temp = arr[low];
            arr[low] = arr[high];
            arr[high] = temp;
            low ++ ;
            high -- ;
        }
        for(int i : arr)
            System.out.print(i + " ");
        
         
    }
    
}
