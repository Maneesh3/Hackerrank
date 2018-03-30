#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    float P=0,N=0,Z=0;
    vector<int> arr(n);
    for(int i = 0;i < n;i++)
    {
       cin >> arr[i];
    }
    for(int i = 0;i < n;i++)
    {
       if(arr[i]>0)
           ++P;
        else if(arr[i]<0)
            ++N;
        else
             ++Z;
    }
    P=P/n;
    N=N/n;
    Z=Z/n;
    cout<<P<<endl<<N<<endl<<Z;
    
    
    return 0;
}
