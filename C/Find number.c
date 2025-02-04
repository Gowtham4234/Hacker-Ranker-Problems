#include<stdio.h>
#define MAX 100
int main(){

    int n,target,found =0;
    int arr[MAX];

    printf("N=");
    scanf("%d",&n);

    for (int i =0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Target Element:");
    scanf("%d",&target);

    for (int i = 0; i <n; i++)
    {
        if (arr[i]==target){   
        
            printf("Element is found at the position %d",i+1);
            found =1;
            break;
        }
    }

    if (found !=1)
    {
    
        printf("Element not found");
    }

    return 0;
}