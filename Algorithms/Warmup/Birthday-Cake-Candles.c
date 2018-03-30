#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,mx=-1,c=0; 
    scanf("%d",&n);
    int *h= malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&h[i]);
        if(h[i]>mx)
             {
             c=1;
            mx=h[i];
        }
        else if(h[i]==mx)
            {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
