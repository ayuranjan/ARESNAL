/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nestedclass;




class outer 
{  
     int o=100;
        void show()
        {
            inner io = new inner();
            System.out.println(io.i);
            io.showi();
           
        }
        class inner 
        {
            int i=10;
            void showi()
            {
                   System.out.println(o);
            }
        }
        }
public class NESTEDCLASS {

    private static outer i;

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args ) 
    {
      outer o = new outer();
      o.show();
     outer.inner i = new outer.inner() ;
    
     
     
     
      
      
     
       
      

      
    }
    
}

