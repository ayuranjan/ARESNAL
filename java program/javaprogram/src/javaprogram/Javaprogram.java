/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaprogram;

import java.util.Scanner;

/**
 *
 * @author Ayush
 */
public class Javaprogram {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       System.out.println("Pick one : \n1. Roll no\t2. Name\t3. Regno\t");
        int choice;
        Info i = new Info();
        Scanner s = new Scanner(System.in);
        choice = s.nextInt();
        switch(choice)
        {
            case 1 : i.displayrno();
                    break;
            case 2 : i.displayname();
                    break;
            case 3 : i.displayregno();
                    break;
            default : System.out.println("Invalid choice");
        }
    }
} // TODO code application logic here
class Info{
    int rno = 17;
    String name = new String("Aquib");
    int regno = 100;
    void displayrno()
    {
        System.out.println("Your roll no is : "+rno);
    }
    void displayname()
    {
        System.out.println("Your name is : "+name);
    }
    void displayregno()
    {
        System.out.println("Your reg no is : "+regno);
    }
}
