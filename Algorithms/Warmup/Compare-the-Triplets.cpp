#include <iostream>
using namespace std;


int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    int as=0,bs=0;
    if(a0>b0)
        as+=1;
    else if(b0>a0)
        bs+=1;
    if(a1>b1)
        as+=1;
    else if(b1>a1)
        bs+=1;
    if(a2>b2)
        as+=1;
    else if(b2>a2)
        bs+=1;        
    cout<<as<<" "<<bs;
    return 0;
}
