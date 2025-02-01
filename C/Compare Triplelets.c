#include<stdio.h>
int main(){

    int a_count=0,b_count =0,c=0;
    int a[3]={4,8,9},b[3]={4,9,5};
    for (int i =0; i<3; i++) {
    if (a[i]>b[i]) {
        a_count+=1;
    }
    else if(a[i]<b[i]){
        b_count+=1;
    }
    else{
        c +=1;
    }
    }
    printf("%d\n%d\n%d",a_count,b_count,c);

    return 0;
}