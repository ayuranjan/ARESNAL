/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arrayinsert;

import java.util.Scanner;
import javafx.util.Pair;

/**
 *
 * @author ayushranjan
 */
public class Arrayinsert {

    /**
     * @param args the command line arguments
     */
    // to remove the duplicate elements in sorted array ..
    
    public static int remove_duplicate(int arr[],int size)
    {
        int temp[] = new int[size];
        temp[0] = arr[0];
        int res = 1 ;
        for(int i =1 ;i<size;i++)
        {
            if(arr[i] != temp[res-1])
            {
                temp[res] = arr[i];
                res ++ ;
            }
        }
        return res ;
    }
    
    public static void main(String[] args) {
        // TODO code appication logic here
        int arr[] = new int[]{10,20,20,30,30,30,50};
        int size = arr.length ;
        //Arrayinsert a = new Arrayinsert();
        //size = remove_duplicate(arr,size);
        System.out.println(size);
        for(int i :arr)
        {
            System.out.print(i + " ");
        }
        int res = 1 ;
        for(int j =1 ;j<size;j++)
        {
            if(arr[j] != arr[res-1])
            {
               arr[res] =arr[j];
                res ++;
            }
        
        }
        System.out.println("size " + res);
        
        
          
    }
    
}
