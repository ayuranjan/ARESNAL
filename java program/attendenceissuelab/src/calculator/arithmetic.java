
package calculator;

import java.util.Scanner;

public class arithmetic {
    public int add()
    {
        System.out.println("ENTER THE 2 NUMBERS YOU WANT TO ADD");
        int a,b;
        Scanner s =new Scanner(System.in);
        a =s.nextInt();
        b =s.nextInt();
        return a+b;
    
    }
    public int sub()
    {
        System.out.println("ENTER THE 2 NUMBERS YOU WANT TO SUBTRACT");
        int a,b;
        Scanner s =new Scanner(System.in);
        a =s.nextInt();
        b =s.nextInt();
        return (a-b);
    }
    public int mul()
    {
        System.out.println("ENTER THE 2 NUMBERS YOU WANT TO MULTIPLY");
        int a,b;
        Scanner s =new Scanner(System.in);
        a =s.nextInt();
        b =s.nextInt();
        return a*b;
    }
    public int div()
    {
        System.out.println("ENTER THE 2 NUMBERS YOU WANT TO DIVIDE");
        int a,b;
        Scanner s =new Scanner(System.in);
        a =s.nextInt();
        b =s.nextInt();
        return (a/b);
    }
}
