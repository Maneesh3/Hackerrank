#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,c=0,i,j; 
    int k; 
    scanf("%d %d", &n, &k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    for(i=0;i<n-1;++i)
        {
         for(j=i+1;j<n;++j)
             {
              if((a[i]+a[j])%k==0)
                  c++;
         }
    }
    printf("%d",c);
    
    // write your code here
    
    return 0;
}
