#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n,int s[], int d, int m){
    // Complete this function
    int cnt=0,sm=0;
    for(int i=0;i<=n-m;++i)
    { sm=0;
        for(int j=i;j<i+m;++j)
        {
            sm=sm+s[j];
        }
      if(sm==d)
          cnt++;
    }
    
    return cnt;
    
}

int main() {
    int n; 
    scanf("%d", &n);
    int *s = malloc(sizeof(int) * n);
    for(int s_i = 0; s_i < n; s_i++){
       scanf("%d",&s[s_i]);
    }
    int d; 
    int m; 
    scanf("%d %d", &d, &m);
    int result = solve(n, s, d, m);
    printf("%d\n", result);
    return 0;
}
