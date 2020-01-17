
package multithread;
class a extends Thread
{
    public void run()
    {
        for(int i=0 ;i<5;i++)
        {
            System.out.println(i);
            try{
                Thread.sleep(1000);
            }catch(Exception e){
                
            }
        }
    }
}
class b extends Thread
{
    public void run()
    {
        for(int i=5 ;i<10;i++)
        {
            System.out.println(i);
            try{
                Thread.sleep(555);
            }catch(Exception e){
                
            }
    }
}
}

public class Multithread {

    public static void main(String[] args) {
        a t1 =new a();
        
        b t2 = new b();
        t1.start();
        
        //System.out.println(t1.getPriority());
        t2.setPriority(7);
       // System.out.println(t1.getPriority());
        //System.out.println(t2.getName());
        //t2.setName("ayush");
        //System.out.println(t2.getName());*/
        try{
            t1.join(700);
        }catch(Exception E)
        {
            
        }
        t2.start();
        
    }
    
}
