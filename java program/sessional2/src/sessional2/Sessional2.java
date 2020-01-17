/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sessional2;

/**
 *
 * @author ayushranjan
 */
//class Test extends Exception{
    
//}
class Base extends Exception{
    
}
class Derived extends Base{
    
}
/*class Test{
    int count = 0;
    void A() throws Exception
    {
        try{
            count =count +1;      
            try{
                count = count +1;
                try{
                    count = count +1 ;
                    throw new Exception();
                }catch(Exception ex)
                {
                    count = count  +1;
                    throw new Exception();
                }
                
                    
                }catch(Exception ex)
                {
                    count = count + 1;
                }
                   
                 
            }catch(Exception ex)
            {
                count = count +1;
        }
    
    
    void display()
    {
        System.out.println(count);
    }
}*/


public class Sessional2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws Exception {
 /*try{
     throw 10;
 }catch(int e)
 {
     System.out.println("Got the exception "+ e );
 }*/
 
 /*try{
     throw new Test();
 }
 catch(Test t)
 {
     System.out.println("the ");
 }
 finally{
     System.out.print("inside finally");
 }*/
 try{
     throw new Derived();
 }catch(Base b)
 {
     System.out.println("the ");
 }
 catch(Derived d)
 {
     System.out.println("the best ");
 }
 
    }
 
 //Test t = new Test();
 //t.A();
 //t.display();
 
 
 
 
 
    }
    
}
