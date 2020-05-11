/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package stack;
import java.util.*;

/**
 *
 * @author ayushranjan
 */
public class Stack {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        // Create Integer type stack
        
                Scanner sc = new Scanner(System.in);
while (sc.hasNext()) {
     String input=sc.next();
     int count = 0 ;
     java.util.Stack<Character> stacky = new java.util.Stack<Character>();
     for (int i = 0; i < input.length(); i++) {
        if(input.length() % 2 != 0)
     {
         System.out.println("false");
         
         break;
     }
         else if (!stacky.isEmpty()) {
             count ++ ;
            switch(input.charAt(i)) {
                case '}' : if (stacky.peek() == '{') {
                    stacky.pop();
                } break;
                case ']' : if (stacky.peek() == '[') {
                    stacky.pop();
                } break;
                case ')' : if (stacky.peek() == '(') {
                    stacky.pop();
                } break;
                default: stacky.push(input.charAt(i));
          }
        } else {
            stacky.push(input.charAt(i));
        } 
     }
     if(count != 0 )
     {
     System.out.println(stacky.isEmpty());}
  }
    }
}