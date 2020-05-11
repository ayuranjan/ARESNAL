/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package wave_array;

/**
 *
 * @author ayushranjan
 */
public class Wave_array {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int a[] = new int[]{1,2,3,4,5,6,7,8,9,10};
        for(int i =1;i<a.length;i=i+2)
        {
            int temp = a[i-1];
            a[i-1] = a[i];
            a[i] = temp;
            
        }
        for(int i :a)
        {
            System.out.print(i + " ");
        }
    }
    
}
