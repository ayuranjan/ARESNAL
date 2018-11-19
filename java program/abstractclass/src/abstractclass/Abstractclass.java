
package abstractclass;
interface i1
{
   int a =10 , b =20;
   public void add();
   public void sub();
   default void intro() // default method in interface only in java 8 & +
   {
       System.out.println("HEY RANJAN");
   }
}
interface i2 
{
    int x =10,y=20;
    void mul();
    void div();
    static void lol()
    {
         System.out.println(" WHY EVERTHING IS SO CONFUSING ");
    }
}
class arth
{
    int c =20 ,d = 10;
    public void mul1()
    {
        System.out.println(c *d);
    }
    public void div1()
    {
         System.out.println(c/d);
    }
}
class test  extends arth implements i1 ,i2
{
    public void add()
    {
        
         System.out.println(a +b);
    }
    public void sub()
    {
         System.out.println(a - b);
    }
    public void mul()
    {
         System.out.println(x *y );
    }
    public void div()
    {
         System.out.println(y/x);
    }
    void show()
    {
         System.out.println("HELLO JAVA ");
    }
    
}
abstract class bike
{
    int t =10 ;
     
    static
    {
        System.out.println("HEY BIKE LOVER ");
    }
    bike()
    {
        t = t+ 7;
        System.out.println(t +"THANKS FOR COMING  ");
    }
     void msg()
     {
         System.out.println(" ************");
         
     }
     abstract void brand();
     abstract void speed();
     abstract void engine();
}
class hero extends bike 
{
    void brand()
    {
        t = super.t + 7;
        System.out.println(t + "ITS A HERO BIKE ");
    }
    void speed()
    {
        System.out.println("BIKE'S TOP SPEED IS 170KM/HR");
    }
    void engine()
    {
        System.out.println("IT IS A 500CC BIKE  ");
    }
}
class yamaha extends bike 
{
    void brand()
    {
        System.out.println("ITS A YAMAHA BIKE ");
    }
    void speed()
    {
        System.out.println(" BIKE'S TOP SPEED IS 200KM/HR");
    }
    void engine()
    {
        System.out.println("IT IS A 700CC BIKE  ");
    }
}

public class Abstractclass {

    
    public static void main(String[] args) {
        /*hero h = new hero();
        h.msg();
        h.brand();
        h.speed();
        h.engine();
        System.out.println("*************");
        yamaha y = new yamaha();
        y.brand();
        y.speed();
        y.engine();*/
        test t = new test();
        t.add();
        t.sub();
        t.div();
        t.mul();
        t.show();
        t.mul1();
        t.div1();
        t.intro();
    }
    
}
