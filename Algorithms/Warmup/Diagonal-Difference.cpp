#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,leftD=0;
    int rightD=0;
    int Input;
    cin >> n;
  for(int j = 0; j < n; j++){
    for(int k = 0; k < n; k++){
        cin >>Input;
        if(j == k){
            leftD +=Input;
        }
        if(j+k == (n-1)){
            rightD +=Input;
        }
    }
}
int ans = abs(leftD-rightD);

    cout<<ans;
    return 0;
}
