
package garbagecollecter;
class garbage
{
    int i =10;
    void show()
    {
        System.out.println(i);
        
    }
    protected void finalize() throws Throwable
    {
        System.out.println("GARBAGE COLLECTOR EXECUTED.."+ this);
    }
}

public class Garbagecollecter {

    
    public static void main(String[] args) {
    garbage g1 = new garbage();
   garbage g2 = new garbage();
   
    g1.show();
    g1  = null;
            
    
    
    System.gc();
    }
    
}
