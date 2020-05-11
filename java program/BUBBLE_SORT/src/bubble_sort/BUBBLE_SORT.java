/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bubble_sort;

/**
 *
 * @author ayushranjan
 */
public class BUBBLE_SORT {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] =new int[]{1,7,3,8,4,9,5};
        int n = arr.length -1 ;
        for(int i=0;i<=n-1;i++)
        {
         for(int j = 0;j<n-i;j++)
         {
             if(arr[j] > arr[j+1])
             {
                 int temp = arr[j];
                 arr[j] = arr[j + 1 ];
                 arr[j+1] = temp;
             }
         }
        }
        for(int i : arr)
        {
            System.out.print(i + " ");
        }
    }
    
}
