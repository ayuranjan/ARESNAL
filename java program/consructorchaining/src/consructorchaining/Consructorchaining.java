/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package consructorchaining;

class person
{
    person()
    {
        System.out.println("HELLO AYUSH");
    }
    person(int i)         
    {
        this();
        System.out.print("YOUR ROLL NUMBER IS " + i);
    }
   
        
    }
    
 class child extends person
    {
        child()
        {
            super();
            System.out.println("HEYA");
        }
 }
public class Consructorchaining {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       
       
       person p =new person(5);
        child c =new child();
        
            }
    
}
