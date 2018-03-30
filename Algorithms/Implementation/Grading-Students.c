#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int solve(int n)
{
     int m;
    if(!(n<37))
		  {
		  	 m=n%5;
		  	if(m>=3)
		  	  {
		  	  	 n=((n/5)+1)*5;
				}
		  }
    // Complete this function
    return n;
    
}

int main() {
    int n; 
    scanf("%d", &n);
    int grades[100];
    for(int grades_i = 0; grades_i < n; grades_i++){
       scanf("%d",&grades[grades_i]);
    
    int result = solve(grades[grades_i]);
    printf("%d\n", result);
    }
    return 0;
}
