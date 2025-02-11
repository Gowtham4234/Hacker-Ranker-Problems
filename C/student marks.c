
#include<stdio.h>
int main(){
    int n,marks[20];
    int c;
    int b=0,g=0;
    printf("Enter the number of Studebts:");
    scanf("%d",&n);
    printf("Enter the Marks:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("\nWhose mark do you want(Boy'1' or Girl'0'):");
    scanf("%d",&c);

    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            b+=marks[i];
        }else
        {
            g+=marks[i];
        }
        
    }
    if(c==1){
        printf("Total boys mark:%d",b);
    }else
    {
        printf("Total girls mark:%d",g);
    }
    
    


    return 0;
}