#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* kangaroo(int x, int v1, int y, int v2) {
    // Complete this function
    if((v1-v2) <0)
    {
        if((x-y)>0)
        {
            if(abs(x-y)%abs(v1-v2) == 0)
                return "YES";
            else
                return "NO";
        }
        else
                return "NO";
    }
    else if((v1-v2) >0)
    {
        if((x-y)<0)
        {
            if(abs(x-y)%abs(v1-v2) == 0)
                return "YES";
            else
                return "NO";
        }
        else
                return "NO";
    }
    else
    {
        if(x==y)
                return "YES";
            else
                return "NO";
        
    }
    
    
}

int main() {
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%i %i %i %i", &x1, &v1, &x2, &v2);
    int result_size;
    char* result = kangaroo(x1, v1, x2, v2);
    printf("%s\n", result);
    return 0;
}
