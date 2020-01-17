
package labevaluationq1;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;

class String_Input
{
    String input,strArray[];
    int n;
    
    
    Scanner s =new Scanner(System.in);
    void take_input()
    {
        System.out.println("ENTER THE SENTENCE ");
        input = s.nextLine();
    }
    void display()
    {
        System.out.println(input);
    }
    void count_token()
    {
        StringTokenizer t =new StringTokenizer(input," ");
        n =t.countTokens();
        System.out.println(t.countTokens());
    }
    void sort()
    {
         
            strArray=input.split(" ");
           
             Arrays.sort(strArray);
    
    }
    void display_sort()
    {
        for(int i=0;i<strArray.length;i++){

             System.out.print(strArray[i] + "  ");
    }
        System.out.println();
    }
    void array_2_string()
    {
       // input = Arrays.toString(strArray);
        input = String.join(" ", strArray);
    }
 void create_file()
     {
         try {
            File file = new File("f1.txt");
            if(!file.exists())
            {
                file.createNewFile();
            }
            PrintWriter pw = new PrintWriter(file);
            pw.println(input);
            pw.close();
            System.out.println("DONE ");
        }catch(IOException e)
        {
            
           System.out.println(e);
        }
     }
     void read_file() throws FileNotFoundException, IOException
     {
         FileReader fr=new FileReader("f1.txt");    
          int i;    
          while((i=fr.read())!=-1)    
          System.out.print((char)i);    
          fr.close(); 
     }
}



public class Labevaluationq1 {

    
    public static void main(String[] args) throws IOException {
        String_Input i = new String_Input();
        i.take_input();
        i.display();
        i.count_token();
        i.sort();
        i.display_sort();
        i.array_2_string();
        i.display();
        i.create_file();
        i.read_file();
        
        
    


    }
    
}
