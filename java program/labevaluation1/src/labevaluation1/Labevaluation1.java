
package labevaluation1;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.*;

class string7
{
     
       String str;
    void input()
    {
        System.out.println("ENTER THE STRING:");
        Scanner s = new Scanner(System.in);
     
        str =s.nextLine();
        
    }
     void count_token()
     {
         StringTokenizer st = new StringTokenizer(str);
         System.out.println(st.countTokens());
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
            pw.println(str);
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

public class Labevaluation1 {

    
    public static void main(String[] args) throws IOException {
        string7 s1 =new string7();
        s1.input();
        s1.count_token();
        s1.create_file();
         s1.read_file();
    }
    
}
