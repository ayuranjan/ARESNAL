
package variablelengthargu;
class var
{
    void show(int ...a )
    {
        //System.out.println(x);
        System.out.println(a.length);
        for(int i :a)
            System.out.println(i);
    }
}
public class Variablelengthargu {

    public static void main(String[] args) {
       var v = new var();
       v.show(1,2,34,4,56,77);
    }
    
}
