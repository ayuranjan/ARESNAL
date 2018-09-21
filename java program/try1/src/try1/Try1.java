
import java.util.Scanner;

 public class insert {
     int i,j,k,n,num,pos,temp=0;
     
     Scanner scn = new Scanner(System.in);
     void show()
     {
         System.out.println("Enter the size of array:");
         n = scn.nextInt();
      int a[] = new int[n+1];
         
        
         
         System.out.println("Enter the values:");
         for(i=0;i<n;i++)
         {
             a[i]=scn.nextInt();
         }
         System.out.println("Displaying values");
         for(int val:a)
         {
             System.out.println(val);
         }
             System.out.println("Enter the position at which you want to insert");
             pos = scn.nextInt();
             System.out.println("Enter the number you want to insert");
             num = scn.nextInt();
             for(i=n-1;i>=pos-1;i--)
             {
             a[i+1]=a[i];
             }
             a[pos-1] = num;
             for(i=0;i<n+1;i++)
             {
             System.out.println(a[i]);
             }
         }
     }


public class Try1 {
    public static void main(String args[])
    {
        insert i = new insert();
        i.show();
        
    }
    
}