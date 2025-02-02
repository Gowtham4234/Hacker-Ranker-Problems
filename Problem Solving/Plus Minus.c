#include<stdio.h>
int main(){
    int arr_count=5;
    int arr[5]={-1,1,0,-2,2};
    float positive=0,negative=0,zero=0;
    for (int i = 0; i < arr_count; i++) {
        if (arr[i] > 0) {
            positive += 1;
        } else if (arr[i] < 0) {
            negative += 1;
        } else {
            zero += 1;
        }
    }
    
    double p = positive / arr_count;
    double n = negative / arr_count;
    double z = zero / arr_count;
    
    printf("%.6lf\n", p);
    printf("%.6lf\n", n);
    printf("%.6lf\n", z); 
    
    return 0;
}
