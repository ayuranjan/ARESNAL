/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package binary_search_recusrive;

/**
 *
 * @author ayushranjan
 */
public class Binary_search_recusrive {

    /**
     * @param args the command line arguments
     */
    static int binary_search(int arr[] ,int min ,int max , int value )
    {
        if(min<=max)
        {
            int middle = (min + max ) /2 ;
            
            if(arr[middle] == value )
            {
                return middle ;
            }
            else if (arr[middle] > value )
            {
                return binary_search(arr,min,middle-1,value);
            }
            else if (arr[middle] <value )
            {
                return binary_search(arr,middle +1 ,max,value);
            }
            
        }
        return -1 ;
        
    }
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] = new int[]{10,20,30,40,50,60,70};
        int n = arr.length;
        System.out.print(binary_search(arr,0,n-1,150));
        
    }
    
}
