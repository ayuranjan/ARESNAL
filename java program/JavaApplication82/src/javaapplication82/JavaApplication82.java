/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication82;

/**
 *
 * @author ayushranjan
 */
public class JavaApplication82 {

    /**
     * @param args the command line arguments
     */
    static int rightIndex(int arr[], int n, int x)
    {
        int l = 0, h = n-1;
        int mid = 0;
        
        while(l <= h)
        {
            mid = (l+h)/2;
            
            if(arr[mid] == x && (mid == n-1 || arr[mid+1] != x))
              return mid;
            
            else if(arr[mid] > x)
              h = mid-1;
            else l = mid + 1;
        }
        return -1;}
    public static void main(String[] args) {
        // TODO code application logic here
       int arr[] = new int[]{20,20, 20 ,20, 20, 20, 20};
        int r = rightIndex(arr,arr.length,20);
        System.out.println(r);
    }
    
}
