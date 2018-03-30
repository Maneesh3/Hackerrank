#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int m; 
    int max,min,c;
    max=-1;
    c=0;
    min=1000;
    scanf("%d %d",&n,&m);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
        scanf("%d",&a[a_i]);
          if(a[a_i]>max)
              max=a[a_i];
        
    }
    int *b = malloc(sizeof(int) * m);
    for(int b_i = 0; b_i < m; b_i++){
       scanf("%d",&b[b_i]);
        if(b[b_i]<min)
              min=b[b_i];
    }
    for(int i=max;i<=min;)
        {
          for(int j=0;j<n;++j) 
               if(i%a[j]!=0)
                 goto end;
          for(int j=0;j<m;++j) 
               if(b[j]%i!=0)
                 goto end;
           c++;
           end:  
        ++i;
    }
    printf("%d",c);
    
    
    return 0;
}
