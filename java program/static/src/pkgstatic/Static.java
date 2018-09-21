/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkgstatic;
class ayu
{
  static int i;
 int j;
 static{
     i=7;
     System.out.println("STATIC BLOCK IS EXECUTED :");
 }
 ayu()
 {
     System.out.println("CONSTRUCTOR IS EXECUTED");
 }
 static void ayush()
 {
     System.out.println("STATIC METHOD IS CALLED");
 }
}
public class Static {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println(ayu.i);
        //ayu a = new ayu();
        ayu.ayush();
    }
    
}
