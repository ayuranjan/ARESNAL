
package tax;

import java.util.Scanner;
class get_details
{
    Scanner s = new Scanner(System.in);
    int price;
    String name;
    void data()
    {        
    System.out.println("ENTER THE NAME AND PRICE");
    name = s.nextLine();
    price = s.nextInt();
    }
    
}

class calculate_tax_2000 extends get_details
{
    double rate , total;
   
    void tax()
    {
        rate = (double)super.price *(0.14);
        total = (double)super.price + rate;
        System.out.println(total);
    }
}
class calculate_tax_2014 extends get_details
{
    double rate,total;
    void tax()
    {
        rate = (double )super.price *(0.15);
        total = (double)super.price +rate;
        System.out.println(total);
    }
}
class calculate_tax_2017 extends get_details
{
  //int cost = super.price;
     double rate,total;
    void gst()
    {
 if(super.price <= 25000)
 {
    rate = (double )super.price *(0.18);
     total = (double)super.price +rate;
     System.out.println(total);
     
 }
 else 
 {
      rate = (double )super.price *(0.28);
     total = (double)super.price +rate;
     System.out.println(total);
 }
     
    
        }
}
public class Tax {

    
    public static void main(String[] args) {
        
        int choice ;
        System.out.println("enter the year of choice 1.2000 2.2014 3.2017 ");
        Scanner s = new Scanner(System.in);
        choice = s.nextInt();
        System.out.println(choice);
        switch(choice )
        {
            case 1 :calculate_tax_2000 c1 = new calculate_tax_2000();
                    c1.data();
                    c1.tax();
                    break;
            case 2 :calculate_tax_2014 c2 = new calculate_tax_2014();
                    c2.data();
                    c2.tax();
                    break;
            case 3 :calculate_tax_2017 c3 = new calculate_tax_2017();
                    c3.data();
                    c3.gst();
                    break;
        }
        
            
                }
    }
    

2