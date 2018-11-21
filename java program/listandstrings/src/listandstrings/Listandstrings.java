
package listandstrings;

import java.util.ArrayList;
import java.util.Scanner;

class list
{
    ArrayList <Integer> a = new  <Integer>  ArrayList();
    int val;
    Scanner s =new Scanner(System.in);
    void additem()
    {
        System.out.println("ENTER THE ITEM TO BE INSERTED ");
        val = s.nextInt();
        a.add(val);
    }
    void show()
    {
        System.out.println("INSERTED LIST IS "+ a);
        System.out.println("SIZE OF LIST IS "+ a.size());
    }
    void convert_into_array()
    {
        int b[]= new int[a.size()];
        a.toArray();
        System.out.println("CPONVERTED ARRAY IS ");
        for(int i:b)
            System.out.println(i);
    }
    
    
}

public class Listandstrings {

   
    public static void main(String[] args) {
        list l =new list();
        int y;
        Scanner s =new Scanner(System.in);
        System.out.println("ENTER -1 TO EXIT ");
        y= s.nextInt();
        while(y != -1)
        {
            l.additem();
            System.out.println("-1 to exit ");
            y =s.nextInt();
        }
        l.show();
        l.convert_into_array();
    }
    
}
