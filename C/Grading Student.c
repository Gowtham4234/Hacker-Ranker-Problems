#include<stdio.h>
int main(){
   
   int grades[5]={33,38,48,82,73};
    for (int i = 0; i < 5; i++) {
        if (grades[i] >= 38) { 
            int remainder = grades[i] % 5;
            if (remainder >= 3) { 
                grades[i] += (5 - remainder);
            }
        }
    }

   for (int i = 0; i < 5; i++)
   {
    
   printf("%d\n",grades[i]);
   }
    return 0;
}
