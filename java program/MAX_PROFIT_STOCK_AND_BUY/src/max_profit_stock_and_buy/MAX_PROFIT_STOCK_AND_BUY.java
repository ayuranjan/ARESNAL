/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package max_profit_stock_and_buy;

/**
 *
 * @author ayushranjan
 */
public class MAX_PROFIT_STOCK_AND_BUY {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] = new int[]{100, 180, 260, 310, 
                    40, 535, 695};
        int profit = 0;
        for(int i=1 ;i<arr.length;i++)
        {
            if(arr[i] >arr[i-1])
            {
                profit = profit + (arr[i] -arr[i-1]);
            }
        }
        System.out.println(profit);
    }
    
}
