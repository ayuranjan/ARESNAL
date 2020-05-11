/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sorted_rotated_array_pivot;

/**
 *
 * @author ayushranjan
 */
public class SORTED_ROTATED_ARRAY_PIVOT {

    /**
     * @param args the command line arguments
     */
    static int pivot(int arr[],int n)
    {
        return 1;
    }
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] = new int[]{10,20,40,5,6,7,8};
        int n = arr.length;
        int start =0 ,end = n-1 ,mid ,pivot=0;
        while(start<=end)
        {
            mid =(start + end) /2 ;
            if(arr[mid] > arr[mid +1])
            {
                pivot = mid ;
                break;
            }
            else if(arr[mid] <arr[start])
            {
                end = mid -1 ;
            }
            else 
            {
                start = mid +1 ;
            }
            
        }
        //System.out.print(pivot);
        
        System.out.println("max number of the array is :" + (arr[pivot]));
        System.out.println("min no of this array is :" + arr[pivot+1]);
    }
    
    
}
