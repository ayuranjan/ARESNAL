/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ifelsenew;

import static java.time.Clock.system;
import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class Ifelsenew {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       int input;
        System.out.println("Enter your age : ");
        Scanner s = new Scanner(System.in);
        input = s.nextInt();
        if(input > 18)
            System.out.println("YOu are eligible to vote.");
        else if(input > 20)
            System.out.println("YOu are a major.");
        else
            System.out.println("YOu are NOT a major.");
        
        // TODO code application logic here
    }
    
}
