/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package staticblock;

import java.util.Scanner;
class block{
static int B,H;
static boolean flag=false;
static{
    
    Scanner s=new Scanner(System.in);
    B=s.nextInt();
    H=s.nextInt();
    
    if(B>0&&H>0)
        System.out.println(B*H);
    else
        System.out.println("java.lang.Exception: Breadth and height must be positive");
}
}
public class Staticblock {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        block b =new block();
    }
    
}
