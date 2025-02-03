#include<stdio.h>
#define MAX 100
int main(){

    int a,n,target,found =0;
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
            a=i;
            found =1;
            break;
        }
    }

    if (found ==1)
    {
        printf("Element is found at the position %d",a+1);
    }else
    {
        printf("Element not found");
    }

    return 0;
}