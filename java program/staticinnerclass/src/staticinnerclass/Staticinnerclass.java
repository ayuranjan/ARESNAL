/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package staticinnerclass;

class outer 
{
    static int o =100;
    static class inner
    {
        int i =10 ;
        void show()
        {
            System.out.println(o);
        }
    }
}
public class Staticinnerclass {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        outer.inner o = new outer.inner();
        o.show();
        
    }
    
}
