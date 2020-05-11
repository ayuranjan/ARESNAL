/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package binary_search_itterative;

/**
 *
 * @author ayushranjan
 */
public class Binary_search_itterative {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] = new int[]{10,20,30,40,50,60,70};
        int min =0 ,max = arr.length -1 ;
        int middle ;
        int val =60 ;
        boolean flag = true ;
        while(min<=max)
        {
            middle = (min+max )/2 ;
            if(val > arr[max] || val < arr[min])
            {
                break;
            }
            if(arr[middle] == val)
            {
                System.out.print( middle);
                flag = false ;
                break;
            }
            else if (arr[middle] > val )
            {
                max = middle -1 ;
            }
            else if (arr[middle] < val)
            {
                min = middle + 1 ;
            }
           
             
        }
        if(flag)
             {
                System.out.println("Not present");
             }
        
        
        
    }
    
}
