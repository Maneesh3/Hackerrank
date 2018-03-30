#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,ch=0,cl=0,i; 
    scanf("%d",&n);
    long long s[1001];
    long long min,max;
    long cmx=0,cmn=0;
    for(int i = 0; i < n; i++)
    {
       scanf("%lld",&s[i]);
        
    }
    min=s[0];
    max=min;
    for(int i = 1; i < n; i++)
    {
        if(s[i]>max)
        {
            max=s[i];
            cmx++;
            continue;
        }
        if(s[i]<min)
        {
            min=s[i];
            cmn++;
            continue;
        }
        
    }
    printf("%ld %ld",cmx,cmn);
   
   /*if(n<2)
   {
       if(n==0 || n==1)
           printf("0 0");
       else if(n=2)
       {
           if(s[0]<s[1])
               printf("1 0");
           else
               printf("0 1");
       }
            
   }
    else
    { 
         if(s[0]<s[1])
             min=s[0];
         else
         {
              max=s[0];
              min=s[1];
              ++ch;
         }
        for(i=2;i<n;++i)
       {
        if(max<s[i])
        {
            ch++;
            max=s[i];
        }
        else if(min>s[i])
        {
            cl++;
            min=s[i];
        }
    }
    
    printf("%d %d",ch,cl);
    }
    */
    
    
    
    return 0;
}
