
package linearserch;


public class Linearserch {

    
    public static void main(String[] args) {
    int arr[] = new int[]{99,66,33,55,44,77,88};
    for(int i=0;i<arr.length;i++)
    {
        for(int j=i+1;j<arr.length;j++)
        {
            if(arr[i] > arr[j])
            {
                int swap = arr[j];
                arr[j] =arr[i];
                arr[i] = swap;
            }
        }
    }
    for(int i =0;i<arr.length;i++)
    {
        System.out.print(arr[i] + ",");
    }
    }
    
}
