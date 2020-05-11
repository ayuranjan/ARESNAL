

/**
 *
 * @author ayushranjan
 */
/*Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively 
i.e first element should be max value, second should be min value, third should be second max, 
fourth should be second min and so on
package rearrange_arrray;*/
public class Rearrange_arrray {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] = new int[]{10, 20, 30, 40 ,50 ,60 ,70 ,80, 90 ,100, 110};
        int n =arr.length;
        int temp[] = new int[n]; 
      
        // Indexes of smallest and largest elements 
        // from remaining array. 
        int small=0, large=n-1; 
      
        // To indicate whether we need to copy rmaining 
        // largest or remaining smallest at next position 
        boolean flag = true; 
      
        // Store result in temp[] 
        for (int i=0; i<n; i++) 
        { 
            if (flag) 
                temp[i] = arr[large--]; 
            else
                temp[i] = arr[small++]; 
      
            flag = !flag; 
        } 
        arr = temp.clone();
      for(int i : arr)
      {
          System.out.print(i + "  ");
      }
    }
    
}
