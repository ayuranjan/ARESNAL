
package attendenceissuelab;

import java.util.Scanner;

class Student
{
    int id , reg;
    String name ;
    int marks[] = new int[6];
    
    Scanner s = new Scanner(System.in);
    void get_info()
    {
        System.out.println("ENTER THE ID ,NAME AND REGISTRATION NUMBER OF THE STUDENT:");
        id = s.nextInt();
        s.nextLine();
        name = s.nextLine();
        reg = s.nextInt();
        
    }
}
class attendance extends Student
{
    double attend;
    Scanner s = new Scanner(System.in);
   double attendance_info()
    {
        System.out.println("ENTER THE ATTENDANCE % OF THE STUDENT  ");
        attend = s.nextDouble();
        return attend;
    }
}
class exam extends attendance
{
   // double att = super.attendance_info();
    Scanner s = new Scanner(System.in);
   
    
    void first_sessional()
    {
       if(super.attend >= 75.00)
       {  System.out.println("ENTER THE MARKS OF 6 SUBJECT IN SESSIONAL 1 OUT OF 15 ");
          for(int i=0;i<6;i++)
              super.marks[i] =s.nextInt();
       }
       else 
           System.out.println("HE IS DETAINED  "); 
    }
    void second_sessional()
    {
         if(super.attend >= 75.00)
         { System.out.println("ENTER THE MARKS OF 6 SUBJECT IN SESSIONAL 2 OUT OF 15 ");
             for(int i=0;i<6;i++)
                  super.marks[i] = super.marks[i] + s.nextInt();
         }
       else 
           System.out.println("HE IS DETAINED  "); 
    }
    void end_sessional()
    {
        if(super.attend >= 75.00)
        { System.out.println("ENTER THE MARKS OF 6 SUBJECT IN END SEM out of 70 ");
          
             for(int i=0;i<6;i++)
                  super.marks[i] = super.marks[i] + s.nextInt();
             System.out.println(super.marks[0]);
        }
       else 
           System.out.println("HE IS DETAINED  ");
    }
}

class result extends exam
{
    double per[]= new double[6];
    void cal_per()
    {
         System.out.println(" NAME IS "+ super.name +"    ,   ID IS "+ super.id +"    , registration number is "+ super.reg);
             
        System.out.println("PERCENTAGE OBTAINED IS  "); 
        for(int i =0;i<6;i++)
             per[i] =(super.marks[i]);
            
    }
    void display()
    {
       for(int i=0;i<6;i++)
           System.out.println(per[i]);
    }
}
public class Attendenceissuelab {

    
    public static void main(String[] args) {
      result r =new result();
      r.get_info();
      r.attendance_info();
      r.first_sessional();
      r.second_sessional();
      r.end_sessional();
      r.cal_per();
      r.display();
    }
    
}
