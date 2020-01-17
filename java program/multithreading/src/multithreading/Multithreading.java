
package multithreading;
class threadeg extends Thread
{
    public void run()
    {
        for(int i =0;i<=5;i++)
        {
            try{
                Thread.sleep(500);
            }catch(Exception e)
            {
                System.out.println(e);
            }
            System.out.println(i);
        }
    }
}

public class Multithreading {

    
    public static void main(String[] args) {
        threadeg t1 = new threadeg();
        threadeg t2 = new threadeg();
        t1.start();
        t2.start();
        System.out.println(t2.getPriority());
        t2.setPriority(7);
        System.out.println(t2.getPriority());
        System.out.println(t1.getName());
        t1.setName("Ayush");
        System.out.println(t1.getName());
    }
    
}
