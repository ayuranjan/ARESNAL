/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package hackerrank;

import java.util.Scanner;

/**
 *
 * @author ayushranjan
 */
public class Hackerrank {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
          Scanner s = new Scanner(System.in);
        int n ;
        n = s.nextInt();
        int[] arr = new int[n];
        for(int i =0;i<n ;i++)
        {
            arr[i] = s.nextInt();

        }
        for(int i = n-1 ;i>=0;i-- )
        {
            System.out.print(arr[i] + " ");
        }
// TODO code application logic here
    }
    
}
