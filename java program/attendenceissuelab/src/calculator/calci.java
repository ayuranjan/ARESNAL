
package calculator;

import java.util.Scanner;


public class calci {

    
    public static void main(String[] args) {
        System.out.println("WELCOME TO THE VIRTUAL CALCULATOR ");
         System.out.println("1.ADDITION 2.SUBTRACTION 3.MULTIPLICATION 4.DIVISON 5.EXIT");
        System.out.println("ENTER YOUR CHOICE ");
         int choice ;
        Scanner s =new Scanner(System.in);
        choice =s.nextInt();
         arithmetic a =new arithmetic(); 
         int sum,difference,multi,divs;
        do{
        
        switch(choice)
        {
            case 1 :sum = a.add();
                    System.out.println("SUM IS "+sum);
                    break;
            case 2 :difference = a.sub();
                  System.out.println("DIFFERENCE IS "+difference);
                    break;
                
            case 3 :multi =a.mul();
                    System.out.println("MULTIPICATION IS "+multi);
                    break;
                
            case 4 :divs =a.div();
                    System.out.println("DIVISION IS "+divs);
                    break;
        }
        System.out.println("1.ADDITION 2.SUBTRACTION 3.MULTIPLICATION 4.DIVISON");
        System.out.println("ENTER YOUR CHOICE ");
        choice =s.nextInt();
    }while(choice != 5);
        }
    
}
