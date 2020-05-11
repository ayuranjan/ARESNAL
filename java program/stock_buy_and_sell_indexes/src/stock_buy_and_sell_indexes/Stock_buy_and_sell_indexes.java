/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package stock_buy_and_sell_indexes;

/**
 *
 * @author ayushranjan
 */
public class Stock_buy_and_sell_indexes {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] = new int[]{100, 180, 260, 310, 
                    40, 535, 695};
        int start = 0,end = 0;
        
        for(int i =1 ;i<arr.length;i++)
        {
            if(arr[start] > arr[i])
            {
                start = i ;
               
            }
            else if (arr[end] < arr[i])
            {
                
                end = i ;
                System.out.print(i +" ");
                
            }
            else if (arr[end]> arr[i] )
            {
                System.out.println(start + " :" + end );
                start = end = i ;
            }
        }
    }
    
}
