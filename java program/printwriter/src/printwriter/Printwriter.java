
package Printwriter;

import static java.awt.JobAttributes.DestinationType.FILE;
import java.io.File;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;


public class Printwriter {

    
    public static void main(String[] args) {
       try {
        File file =new File("FILE.txt");
        if(file.exists())
            {
                file.createNewFile();
            } 
        PrintWriter pw = new PrintWriter(FILE);
        pw.println("yay created a file  finally ");
        pw.println(7);
        pw.close();
        System.out.println("ITS DONE");
        
            }catch (IOException ex) {
                Logger.getLogger(Printwriter.class.getName()).log(Level.SEVERE, null, ex);
        }
        
    }
    
}
