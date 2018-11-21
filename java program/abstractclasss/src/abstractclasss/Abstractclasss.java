/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package abstractclasss;
interface I1
{
    int a=10,b=20;
public void add();
public void sub();

}
class arithemtic 
{
    int x = 10,y= 20;
    void mul()
    {
        System.out.println(x*y);
    }
    void div()
    {
        System.out.println(y/x);
    }
}
class test extends arithemtic implements I1 
{
    public void add()
    {
        System.out.println(a+b);
    }
    public void sub()
    {
        System.out.println(b-a);
    }
}
public class Abstractclasss {

   
    public static void main(String[] args) {
       test t =new test();
       t.add();
       t.sub();
       t.div();
       t.mul();
    }
    
}
