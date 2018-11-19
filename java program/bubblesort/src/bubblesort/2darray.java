
package bubblesort;


public class Bubblesort {

   
    public static void main(String[] args) {
       int arr[] =new int[]{55,11,88,44,66,33,77,22,99};
       for(int i =0;i<arr.length;i++)
       {
           if(arr[i] >arr[i+1])
           {
               int swap = arr[i];
               arr[i] = arr[i+1];
               arr[i+1] = swap;
           }
       }
    }
    
}
