package Java;

public class Sorting {
    public static void main(String[] args) {
        int arr[]={12,67,98,56,34,76,90,23,34,65};
        for (int i = 1; i <arr.length;i++)
        {
            for (int j = 1; j < arr.length-i; j++)
            {
                if (arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j]= arr[j+1];
                    arr[j+1]= temp;
                }
            }
            
        }
        System.out.println("Sorted Array:");
        for (int  i = 0; i < arr.length; i++)
        {
         System.out.println(arr[i]);
        
        }
        
    }
}
