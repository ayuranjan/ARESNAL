
package createafile;
import java.util.*;
import java.io.*;


class writer_c
{
    String a,b;
    void getdata()
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter two int numbers - ");
        a=s.next();
        b=s.next();
    }
    void write_file()
    {
        try
        {
            FileWriter fw = new FileWriter("");
            fw.write(a+" ");
            fw.write(b+" ");
            fw.close();
        }
        catch(IOException e)
        {
            System.out.println("Unable to open file..");
        }
    }
    
}


public class Createafile {

    public static void main(String[] args) {
        writer_c w = new writer_c();
        w.getdata();
        w.write_file();
    }
    
}
