#include<stdio.h>

int main()
{
    int arr[]={11,2,3,40,5};
    int arr_count = 5;
   
    for (int i=0;i<arr_count; i++) {
        for (int j=0; j<arr_count-1; j++) {
            if (arr[j]>arr[j+1]) {
            int temp =arr[j];
            arr[j]= arr[j+1];
            arr[j+1]=temp;
            }
        
        }
        
    
    }
    int max = arr[1]+arr[2]+arr[3]+arr[4];
   int min = arr[0]+arr[1]+arr[2]+arr[3];
   printf("%d %d",min,max);

   return 0;
}