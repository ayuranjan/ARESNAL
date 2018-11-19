
package pkg2darray;

import java.util.Scanner;


public class Main {

    
    public static void main(String[] args) {
      int arr[][] ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
      int arr2[] ={1,23,4,9};
      for(int i =0;i<arr.length;i++)
    {
        System.out.print(arr2[i] + ",");
    }
     
     for(int i=0;i<arr.length;i++)
     {
         for(int j=0;j<arr.length;j++)
         {
             System.out.print(arr[i][j] +"   ");
         }
         System.out.println();
     }
     int arr3[][] ={ {10,11,12,13},{14,15,16,17},{18,19,20,21}};
     System.out.println(arr3.length);
     System.out.println(arr3[0].length);
    
    int arr4[][];
    System.out.println("ENTER THE NUMBER OF ROWS AND COLUMN");
    Scanner s =new Scanner(System.in);
    int x = s.nextInt();
    int y = s.nextInt();
    arr = new int[x][y];
    System.out.println("ENTER THE 2 D ARRRAY MATRIX "+ x+"*"+y);
    for(int i=0;i<x;i++)  
    {
        for(int j=0;j<y ;j++)
        {
            arr[i][j] =s.nextInt();
        }
    }
    for(int i=0;i<x;i++)  
    {
        for(int j=0;j< y ;j++)
        {
            System.out.print(arr[i][j] +" ");
        }
        System.out.println();
    }
    }
}
