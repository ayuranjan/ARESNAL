
package filecreation;
import java.io.*;

public class Filecreation {

    
    public static void main(String[] args) throws FileNotFoundException, IOException {
        try {
            File file = new File("ayush.txt");
            if(!file.exists())
            {
                file.createNewFile();
            }
            PrintWriter pw = new PrintWriter(file);
            pw.println("I am the king ");
            pw.println("69");
            pw.close();
            System.out.println("DONE ");
        }catch(IOException e)
        {
            
           System.out.println(e);
        }
        FileReader fr=new FileReader("ranjan.txt");    
          int i;    
          while((i=fr.read())!=-1)    
          System.out.print((char)i);    
          fr.close();    
    }
    
}
