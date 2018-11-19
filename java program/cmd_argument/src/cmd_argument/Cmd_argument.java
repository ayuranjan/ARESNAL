/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cmd_argument;

/**
 *
 * @author ayushranjan
 */
public class Cmd_argument {

    public static void main(String a[]) {
        int i= 0;
        double d =0;
        System.out.println(a.length);
        for(i = 0;i<a.length;i++)
            d = d +Double.parseDouble(a[i]);
        System.out.println(d);
        
    }
    
}
