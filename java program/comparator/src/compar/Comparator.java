/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Compar;

import compar.Comparator;

/**
 *
 * @author ayushranjan
 */
class Student 
{
    int roll ;
    String name ;
    public Student(int r , String  s)
    {
        roll = r ;
        name = s ;
    }
    public String display()
    {
        return roll + " " + name ;
    }
}

class Sortbyroll implements Comparator<Student>
{
    
}


public class Compar {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
    }
    
}
