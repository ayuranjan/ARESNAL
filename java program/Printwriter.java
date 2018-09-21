
package printwriter;

import java.io.File;
import java.io.IOException;
import java.io.PrintWriter;
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
           
           
        
            }catch (IOException ex) {
                Logger.getLogger(Printwriter.class.getName()).log(Level.SEVERE, null, ex);
        }
        
    }
    
}
