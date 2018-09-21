/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package filecreated;

import java.io.File;

/**
 *
 * @author Ayush
 */
public class Filecreated {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        try{
            File file = new File("C:\\ayu.txt");
            boolean f = file.createNewFile();
            if(f)
            {
                System.out.println("FILE HAS BEEN CREATED");
            }
            else {
                 System.out.println("FILE HAS NOT BEEN CREATED");
            }
            
        }catch(IO E)
    }
    
}
