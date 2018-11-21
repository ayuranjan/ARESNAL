/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package leap.year;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class LeapYear {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int year ,flag ;
        Scanner s = new Scanner(System.in );
        System.out.println("Enter the year: ");
        year = s.nextInt();
        if(year %400 == 0  )
            flag = 1  ;
        else if ( year % 100 == 0)
            flag = 0;
        else if ( year % 4 == 0)
            flag = 1;
        if( flag =1
             System.out.println("IT IS A LEAP YEAR");
        else 
            System.out.println("IT IS NOT A LEAP YEAR");
    }
}
