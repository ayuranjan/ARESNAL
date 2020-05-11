/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication64;

import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Stack;


public class JavaApplication64 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        Deque<Integer> deque = new ArrayDeque<>();
        HashSet<Integer> set = new HashSet<>();
        
        int n = in.nextInt();
        int m = in.nextInt();
        int max = Integer.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            int input = in.nextInt();
            
            deque.add(input);
            set.add(input);
            System.out.println(set.size());
            System.out.println(deque.size());
            
            if (deque.size() == m) {
                if (set.size() > max) max = set.size();
                int first =   deque.remove();
                if (!deque.contains(first)) set.remove(first);
                
            
        }
        
        System.out.println(max);
    }
    }
}
    

