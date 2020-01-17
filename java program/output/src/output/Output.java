/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package output;
 class ds{
    int[] arr = new int[10];
    static int t =0;
    /*ds()
    {
        arr = new int[10];
        t =0;
    }*/
    void put(int i)
    {
        if(t<10)
            arr[t++] =i;
    }
    int get()
    {
        int i =0;
        if(t>0)
            i =arr[i++];
        return i;
    }
}


public class Output {

    
    public static void main(String[] args) {
       ds s = new ds();
       s.put(2);
       s.put(1);
       
       System.out.print(s.get()+s.get() +s.get() );
    }
    
}
