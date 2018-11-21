
package multilevel;
class property_A
{
    double money = 10000;
    void cashA()
    {
        System.out.println("MONEY GRANDPA HAS "+ money);
    }
}
class property_B extends property_A
{
    double  money = 1000 +super.money;
    void cashB()
    {
        System.out.println("MONEY DAD HAS "+money );
    }
}
class property_c extends property_B
{
    double money = 100 +super.money;
    void cashC()
    {
          System.out.println("MONEY SON HAS "+money );
    }
}

public class Multilevel {

   
    public static void main(String[] args) {
       property_c p =new property_c();
       p.cashA();
    }
    
}
