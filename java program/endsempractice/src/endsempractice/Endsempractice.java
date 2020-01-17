
package endsempractice;

import java.io.Console;
import java.util.Random;
import java.util.Scanner;



public class Endsempractice {

   
    public static void main(String[] args) {
       
       /*int a[] = new int[10];
       for(int i = 0;i<10;i++)
       {
           Scanner s = new Scanner(System.in);
           a[i] =s.nextInt();
       }
       for(int i = 0;i<10;i++)
       {
           System.out.print(a[i]);
       }*/
       /*int a1[] = {1,2,4,6,7};
       for(int i= 0;i<a1.length;i++)
           System.out.println(a1[i]);*/

 Random rand = new Random(); // create Random object once
 int tries = 0,die1,die2;
 do {
  die1 = rand.nextInt(6) + 1;
  die2 = rand.nextInt(6) + 1;
 System.out.println(die1 + ", " + die2);
 tries++;
 } while (die1 != die2);

 System.out.println("It took you " + tries + " tries.");
 }
   }

    
    


