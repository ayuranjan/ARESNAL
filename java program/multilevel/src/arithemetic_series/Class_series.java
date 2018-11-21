/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package arithemetic_series;

public class Class_series {
 
    
    int series(int n)
    {
        if(n ==0)
              return 0;
        else 
            return n+ series(n-1);
      
    }
}
