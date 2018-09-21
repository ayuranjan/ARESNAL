
package maatrixmulti;


public class sotinginarray {
    public static void main(String s[])
    {
        int arr[] ;
        arr = new int[]{22,77,44,66,29,10};
        
        for(int i =0 ;i<arr.length-1;i++)
        {
            for(int j=i+1;j<arr.length-1;j++)
            {
             if (arr[i] <arr[j])
             {
                 int swap = arr[i];
                 arr[i]= arr[j];
                 arr[j] = arr[i];
                }
            }
        }
        for(int z =0;z<arr.length;z++)
        {
           System.out.println(arr[z]); 
        }
    }
    }

