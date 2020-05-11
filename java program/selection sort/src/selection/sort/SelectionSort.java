/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package selection.sort;

/**
 *
 * @author ayushranjan
 */
public class SelectionSort {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] = new int[]{1,9,3,8,4,6,5};
        int n = arr.length -1 ;
        int min_index ;
        for(int i = 0 ;i<n;i++)
        {
            min_index =i;
            for(int j= i;j<n;j++)
            {
                if(arr[min_index] > arr[j])
                {
                   min_index = j ;
                }
            }
            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp ;
            
            
        }
        for(int i : arr)
        {
            System.out.print(i + " ");
        }
    }
    
}
