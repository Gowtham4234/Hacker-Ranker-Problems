#include<stdio.h>
int main(){
    int candles_count =4;
    int candles[4]={3,6,4,6};
    // int count =0;
    // for (int i=0;i<candles_count; i++) {
    // for (int j=0; j<candles_count-1; j++) {
    //     if (candles[j]>candles[j+1]) {
    //     int temp =candles[j];
    //     candles[j]= candles[j+1];
    //     candles[j+1]=temp;
    //     }
    // }
    // if(candles[candles_count-1]==candles[i]){
    //     count +=1;
    // }        
    // }

    int Max=candles[0];
    int count =0;
    for (int i=0; i<candles_count; i++) {
        if (candles[i]>Max) {
            Max =candles[i];
            count=1;        
        }else if (candles[i]==Max) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
