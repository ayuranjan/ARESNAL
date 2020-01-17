/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package stringss;

import java.util.Scanner;

/**
 *
 * @author ayushranjan
 */
public class Stringss {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       String str;
      int len;
      Scanner scan = new Scanner(System.in);
	  
      System.out.print("Enter Your Name : ");
      str = scan.nextLine();
     /* System.out.println("name is " + str);
      len = str.length();// TO CALCULATE LENGTH OF STRING 
      System.out.println(len);
      System.out.println("name in upper case is " + str.toUpperCase());
      System.out.println("name in lower case is " + str.toLowerCase());
      System.out.println("ENTER STRING YOU WANT TO CONCATINATE");
      String s1 = scan.next();
      System.out.println("full name is " + str.concat(s1));
      System.out.println("the trimmed string is " + str.trim());
      System.out.println("Enter  a char");
      String s2 = scan.next();
      System.out.println("Index of char is " + str.indexOf(s2));
       System.out.println("the substring is " + str.substring(1,4));
     */
     System.out.println(str.indexOf("sh"));
      str = str.substring(4,10);
      System.out.println(str);
    }
    
}
