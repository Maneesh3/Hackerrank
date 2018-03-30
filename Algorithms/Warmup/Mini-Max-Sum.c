#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
     long long int ar[6],sm=0,mn=9999999999,mx=-1,smin=0,smax=0;
    for(long i = 0; i < 5; i++)
    {
       scanf("%lld",&ar[i]);
        //mx=ar[0];
 
        sm+=ar[i];
    }
    for(int z=0;z<5;++z)
    {
        if(mx<ar[z])
            mx=ar[z];
    }
    for(int z=0;z<5;++z)
    {
        if(mn>ar[z])
            mn=ar[z];
    }
    
  //  printf("%lld\n",mx);
  /*  for(long j=0;j<5;++j)
    {
        sm=0;
    for(long i=0;i<5;++i)
    {   if(i!=j)
        { sm=sm+ar[i];
        }
      
    }
     if(sm>mx)
         mx=sm;
     else if(sm<mn)
         mn=sm;
    }
    
    */
    
   /* for(int i=0;i<5;++i)
    {
        if(ar[i]!=mx)
            smin+=ar[i];
    }
    for(int i=0;i<5;++i)
    {
        if(ar[i]!=mn)
            smax+=ar[i];
    }
    */
    
    printf("%lld %lld",sm-mx,sm-mn);
    return 0;
}
