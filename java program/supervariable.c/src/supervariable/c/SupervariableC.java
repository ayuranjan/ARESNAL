/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package supervariable.c;

 class A
{
    int i =10 ;
    A()
    {
        System.out.println(i);
    }
}
class B extends A{
    int i =100;
    B()
    {
        super();
        System.out.println(i);
    }
}




public class SupervariableC {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        B b = new B();
   
     
    }
    
}
