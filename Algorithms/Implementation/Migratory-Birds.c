#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int ar[6]={0};
    int *types = malloc(sizeof(int) * n);
    for(int types_i = 0; types_i < n; types_i++){
       scanf("%d",&types[types_i]);
        ar[types[types_i]]++;
    }
    int max=-1,i,br;
    for(i=5;i>=1;--i)
     {
         if(max<=ar[i])
            {  max=ar[i];
             br=i;
    }
    }
    printf("%d",br);
    // your code goes here
    return 0;
}
