
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Ayush
 */
public class factorial {
    public static void main(String[] args) {
        int num;
        Scanner s =new Scanner(System.in);
        System.out.println("Enter the number:");
        num = s.nextInt();
        
     
        
       fact f = new fact();
     int  result = f.factorial(num);
        System.out.println(result);
        
        
    }
    
    
}
