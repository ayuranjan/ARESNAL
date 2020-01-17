/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arraylist1;

import java.util.ArrayList;
import java.util.Scanner;

class demo
{
    ArrayList<Integer> a = new<Integer> ArrayList();
    int item;
    Scanner s=new Scanner(System.in);
    void additem()
    {
        System.out.println("ENTER THE ITEM");
        item = s.nextInt();
        a.add(item);//to add item in array list
    }
    void show_size()
    {
    System.out.println("inserted list is " + a );
    System.out.println("size is " + a.size());
    }
    void convert_into_array()
    {
        int b[] = new int[a.size()];
        a.toArray();
        for(int i :b )
            System.out.println(i);
    }
        
     
        
    
}
public class Arraylist1 {

    
    public static void main(String[] args) {
        demo d = new demo();
        int y;
        Scanner s =new Scanner(System.in);
        System.out.println("enter -1 to exit");
        y =s.nextInt();
        while(y != -1)
        {
            d.additem();
            System.out.println("enter -1 to exit");
            y =s.nextInt();
        }
        d.show_size();
        d.convert_into_array();
    }
    
}
