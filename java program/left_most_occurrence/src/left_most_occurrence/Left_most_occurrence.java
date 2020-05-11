/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package left_most_occurrence;

/**
 *
 * @author ayushranjan
 */
public class Left_most_occurrence {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] = new int[]{20,20, 20 ,20, 20, 20, 20};
     //we have to find left most occurence of 30 i.e 2 ..if we use just binary search we will get 3 
     
        //int min =0 ,max = arr.length -1 ;
        //int middle ;
        int x =20 ;
        boolean flag = true ;
        int l = 0, h = arr.length-1;
        int mid = 0;
        
        while(l <= h)
        {
            mid = l + (h-l)/2;
            
            if(arr[mid] == x && (mid == 0 || arr[mid-1] != x))
            {
                System.out.println(mid);
                flag = false ;
                break;
            }
            else if(arr[mid] >= x)
              h = mid - 1;
            else l = mid + 1;
        }
        
           
             
        
        if(flag)
             {
                System.out.println("Not present");
             }
        
    }
    
}
