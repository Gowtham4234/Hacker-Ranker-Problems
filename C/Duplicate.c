#include<stdio.h>
#define MAX 100
int main(){

    int arr[10]={44,14,22,75,66,22,83,92,14,46};
    int sort[MAX];
    for (int i = 0; i <10;i++)
    {
        for (int j = 0; j < 10-i; j++)
        {
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
        
    }
    for (int  i = 0; i < 10; i++)
    {
     printf("%d\n",arr[i]);
    
    }

    return 0;
}