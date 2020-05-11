/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package leftrotatearray;

/**
 *
 * @author ayushranjan
 */
public class Leftrotatearray {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int arr[] =new int[]{1,2,3,4,5,6,7,8,9,10};
        int d = 4 ; // o/p: 5,6,7,8,9,10,1,2,3,4
        int temp[] = new int[d];
        for(int i=0;i<d;i++)
        {
            temp[i] = arr[i];
        }
        for(int i = d;i<arr.length;i++)
        {
            arr[i-d] =arr[i];
        }
        int j =0 ;
        for(int i = arr.length -d;i<arr.length;i++)
        {
            arr[i] = temp[j];
            j++;
        }
        for(int i :arr)
        {
            System.out.println(i);
        }
    }
    
}
