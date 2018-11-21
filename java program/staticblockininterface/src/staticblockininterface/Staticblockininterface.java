
package staticblockininterface;
interface demo
{
    int i =7;// this becomes a final variable
    public void sop();
    static  void show() 
    {
        System.out.println("HEY AYUSH ");
    }
    
}
class test implements demo 
{
   public  void sop()
    {
        System.out.println("I AM SEXY AND I KNOW IT ");
        
    }
    
}
public class Staticblockininterface {

    
    
    public static void main(String[] args) {
      test t = new test();
      t.sop();
      demo.show();
      System.out.println(demo.i);
    }
    
}
