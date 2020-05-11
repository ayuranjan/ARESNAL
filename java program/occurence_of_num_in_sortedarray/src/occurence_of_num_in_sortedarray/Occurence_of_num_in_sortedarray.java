/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package occurence_of_num_in_sortedarray;

/**
 *
 * @author ayushranjan
 */
public class Occurence_of_num_in_sortedarray {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] = new int[]{20,20, 20 ,20, 20, 20, 20};
        int x =20 ;
        int l = 0, h = arr.length-1;
        int mid = 0;
        int count =0 ;
        int left_index=0 ,right_index =arr.length -1;
      while(h>= l )
      {
          mid = (l+h)/2;
          if(arr[mid] == x &(mid == 0 || arr[mid-1] != x ))
          {
              left_index = mid;
          }
          else if (arr[mid] >= x)
          {
              h = mid -1 ;
          }
          else if(arr[mid] < x)
          {
              l = mid + 1;
          }
      }
      
      l = 0;
      h = arr.length-1;
      mid = 0;
      int n = arr.length;
      while(l<=h)
      {
          mid = (l+h)/2;
          if(arr[mid] == x &&(mid == n -1 || arr[mid +1] != x))
          {
              right_index = mid;
          }
          else if(arr[mid] >x)
          {
              h = mid -1 ;
          }
          else if(arr[mid] <= x )
          {
              l = mid +1 ;
          }
        
      }
        
     System.out.println(right_index + " " );
     System.out.println(left_index + " " );
    }
    
}
