/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pallindrome.string;

/**
 *
 * @author ayushranjan
 */
public class PallindromeString {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        String a = "ayush";
        String b ="ushay";
        boolean flag = true ;
        if(a.length() != b.length())
        {
            flag = false ;
            System.out.print("False");
        }
        int c[] =new int[25];
        int d[] = new int[25];
        for(int i =0 ;i< a.length() -1 ;i++)
        {
            c[a.charAt(i) - 'A']++;
            d[b.charAt(i) - 'A']++;
        }
        for(int i =0;i<26; i++)
            if(c[i] != d[i] )
                flag = false;
                 System.out.println("False");
        
        if(flag){
            System.out.print("True ");
        }
        }
    }
    

