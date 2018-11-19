
package nested.pkgclass;
class outer
{
    int a =100;
    void show()
    {
       // inner i = new inner();
        System.out.println("ITS THE OUTER CLASS ");
        //i.show();
    }
    class inner 
    {
        int j =10;
        void show()
        {
            System.out.println("ITS THE INNER NESTED CLASS ");
        }
    }
    static class inner_a
    {
        int p =77;
        void show()
        {
            System.out.println(p);
        }
    }
}

public class NestedClass {

    
    public static void main(String[] args) {
       outer o =new outer();
       o.show();
       outer.inner oi = o.new inner();
       oi.show();
       outer.inner_a o1 = new outer.inner_a();
       o1.show();
    }
    
}
