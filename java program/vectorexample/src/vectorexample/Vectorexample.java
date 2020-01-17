/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package vectorexample;

import java.util.Vector;

/**
 *
 * @author ayushranjan
 */
public class Vectorexample {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       /* Vector v = new Vector(7);
        System.out.println(v.size());
        System.out.println(v.capacity());
        v.add(7);
        v.add(11);
        v.add(10);
        v.add("ayush");
        v.add("ranjan");
        v.add("A");
        v.add(1.22);
        v.add(3.56);
        System.out.println(v.capacity());
        v.add(7);
        v.add(11);
        v.add(10);
        v.add("ayush");
        v.add("ranjan");
        v.add("A");
        v.add(1.22);
        v.add(3.56);
        v.add(7);
        v.add(11);
        v.add(10);
        v.add("ayush");
        v.add("ranjan");
        v.add("A");
        v.add(1.22);
        v.add(3.56);
        System.out.println(v.capacity());*/
       /*Vector v1 = new Vector(5); 
       v1.add(10);
       v1.add(20);
       v1.add(30);
       int sum = 0;
       for(int i =0; i < v1.size(); i++)
       { 
           sum = sum + (Integer)v1.get(i);

       }
       System.out.println(sum);
*/
       
      
       Vector<String> v2 = new Vector<String>(5);
       v2.add("ayush");
       v2.add("ranjan");
       v2.set(0, "vikas");
       for(int i =0; i < v2.size(); i++)
       { 
          System.out.print(v2.get(i) +" ");

       }
    }
    
}
