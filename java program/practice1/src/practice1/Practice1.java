/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package practice1;

/**
 *
 * @author ayushranjan
 */
class ayush{
    void show()
    {
        System.out.println("HELLO FROM FATHER ");
    }
}
class ayush_son extends ayush
{
    void show()
    {
        System.out.println("HELLO FROM CHILD ");
    }
    void unique()
    {
        System.out.println("UNIQUE ");
    }
}
public class Practice1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        ayush a = new ayush();
        ayush b = new ayush_son();
        ayush_son s = new ayush_son();
        // b.unique(); this will not run 
        s.unique();
        a.show();
        b.show();// this is upcasting ....upcasting can only call those method which are present in the parent class 
        //now lets look at downcasting ....here we first reference parent class to child class and then child class to previous child .
        ayush c = new ayush_son();
        ayush_son v = (ayush_son)c;
        v.show();
        v.unique();
        
    }
    
}
