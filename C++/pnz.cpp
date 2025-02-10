#include<iostream>
using namespace std;

int main() {
    int arr_count = 5;
    int arr[] = {1, 1, 0, -1, -1};
    float positive = 0, negative = 0, zero = 0;

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


    cout<<"\n"<<p; 
    cout<<"\n"<<n;
    cout<<"\n"<<z;
    return 0;
}
