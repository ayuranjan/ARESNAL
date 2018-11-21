/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package constructorchaining;

class chain
{
    chain()
    {
        System.out.println("HELLLO AYUSH ");
        
    }
    chain(int i)
    {
        this();
        System.out.println(i);
        
    }
    chain(String s ,int i )
    {
        this(i);
        System.out.println(s + " has " + i + "mangoes");
        
    }
}
public class Constructorchaining {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       chain c = new chain("ayush", 7);
    }
    
}
