/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package array;

import java.util.Scanner;
class insertion 
{
    
    void  atbegin(int arr[],int num)
    {
        System.out.println("lol");
    }
      
    void atgivenpos(int arr[],int num,int pos)
    {
         for(int i = (arr.length-1); i >= (pos-1); i--)
        {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = num;
        for(int i=0;i<arr.length;i++)
         {
             System.out.print( arr[i]);
         }
    }
    
}


public class Array {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int arr[];
         arr = new int[]{1,2,3,4,5,6,7};
         System.out.println("OLD ARRAY IS ");
         for(int i=0;i<arr.length;i++)
         {
             System.out.print( arr[i]);
         }
        System.out.println("1.insertion at the beginning 2. Insertion at the end 3.Insertion at given position");
        System.out.println("Enter your choice ");
        
        Scanner s = new Scanner(System.in);
        int choice = s.nextInt();
        System.out.print("Enter the number to be inserted ");
        int num = s.nextInt();
        insertion i = new insertion(); 
        
        switch(choice )
        {
            case 1 : i.atbegin(arr, num );
            
            case 2 :System.out.print("Enter the postion at which the number is inserted :");
                     int pos = s.nextInt();
                     i.atgivenpos(arr, num, pos);
           
        }
         
         
    }
    
}
