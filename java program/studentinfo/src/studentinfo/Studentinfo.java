
package studentinfo;

import java.util.Scanner;

class Student
{
 int reg,phone;
 String  name ,email;
    void   get_info()
    {
        System.out.println("ENTER THE REG NO , NAME ,EMAIL ID AND PHONE NUMBER OF THE STUDENT");
        Scanner s = new Scanner(System.in);
        reg = s.nextInt();
        s.nextLine();
         name = s.nextLine();
        email = s.nextLine();
         phone = s.nextInt();
         
    }
}

class calculate_percentage extends Student
{
   int marks1,marks2,marks3,marks4,marks5,marks6;
   int sum = 0 ;
   double percentage ;
   Scanner s = new Scanner(System.in);
    
    void get_marks()
    {
        System.out.println("ENTER MARKS OF SIX SUBJECTS out of `100 ");
        marks1 =s.nextInt();
        marks2 = s.nextInt();
        marks3 = s.nextInt();
        marks4 = s.nextInt();
        marks5 = s.nextInt();
        marks6 = s.nextInt();
        
        sum = marks1 + marks2 + marks3 +marks4 +marks5 +marks6;
        percentage = (double) sum / 6;
        
        
    }
    void show_student_info()
    {
     
        System.out.println(super.name);
        System.out.println(super.reg);
        System.out.println(super.email);
        System.out.println(super.phone);
        System.out.println(this.percentage);
           
    }
}

public class Studentinfo {

   
    public static void main(String[] args) {
    
    calculate_percentage p = new calculate_percentage();
    p.get_info();
     p.get_marks();
    p.show_student_info();
    
    
    
    
    }
    
}
