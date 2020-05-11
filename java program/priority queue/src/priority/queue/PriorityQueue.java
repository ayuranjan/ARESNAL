/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package priority.queue;

import java.util.Comparator;

/**
 *
 * @author ayushranjan
 */
class The_Comparator implements Comparator<String> { 
    public int compare(String str1, String str2) 
    { 
        String first_Str; 
        String second_Str; 
        first_Str = str1; 
        second_Str = str2; 
        return second_Str.compareTo(first_Str); 
    } 
} 
public class PriorityQueue {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        PriorityQueue<String> queue = new PriorityQueue<>();
  
        queue.add("G"); 
        queue.add("E"); 
        queue.add("E"); 
        queue.add("K"); 
        queue.add("S"); 
        queue.add("4"); 
        System.out.println("Queue before using the comparator: " + queue); 
  
        System.out.println("The elements sorted in descending"
                           + "order:"); 
        for (String element : queue) 
            System.out.print(element + " "); 
    }
    
}
