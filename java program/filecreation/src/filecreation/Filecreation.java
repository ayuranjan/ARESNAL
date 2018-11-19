
package filecreation;
import java.io.*;

public class Filecreation {

    
    public static void main(String[] args) {
        try {
            File file = new File("ayush.txt");
            if(!file.exists())
            {
                file.createNewFile();
            }
            PrintWriter pw = new PrintWriter(file);
            pw.println("THIS IS SPARTA ");
            pw.println("7777777");
            pw.close();
            System.out.println("DONE ");
        }catch(IOException e)
        {
            e.printStackTrace();
        }
         BufferedReader br = null;
         try {
             br = new BufferedReader(new FileReader("ayush.txt"));
             String line ;
             while((line = br.readLine()) != null)
             {
                 System.out.println(line);
             }
             
         }catch (IOException e )
         {
             e.printStackTrace();
         }
         finally{
             try{
                 br.close();
             }catch(IOException e)
             {
                 e.printStackTrace();
             }
         }
    }
    
}
