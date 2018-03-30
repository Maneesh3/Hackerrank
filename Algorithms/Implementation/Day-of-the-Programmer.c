#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void solve(int year){
    // Complete this function
    if(year < 1918)
        {
          if(year%4==0)
           {
             printf("12.09.");
              printf("%d",year);
           }
          else
             {
             printf("13.09.");
             printf("%d",year);
         }
    }
    else if(year==1918)
        printf("26.09.1918");
   else if(year%400==0 || (year%4==0 && year%100!=0))
        {
         printf("12.09.");
         printf("%d",year);
    }
    else
        {
        printf("13.09.");
         printf("%d",year);
    }
}

int main() {
    int year; 
    scanf("%d", &year);
    int result_size;
    solve(year);
    
    return 0;
}
