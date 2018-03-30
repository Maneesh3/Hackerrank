#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  long int a[100000],n,k,s=0,ct;
    scanf("%ld %ld",&n,&k);
     for(long int i=0;i<n;++i)
        {
          scanf("%ld",&a[i]);
         if(i!=k)
             s=s+a[i];
     }
    scanf("%ld",&ct);
    if((s/2)==ct)
        printf("Bon Appetit");
    else
        printf("%ld",ct-(s/2));
         
         
         /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
