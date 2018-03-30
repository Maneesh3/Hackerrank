#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
    int i,j,mi,mj,pi,pj,di,dj;
    for(i=0;i<n;++i)
        {
        for(j=0;j<n;++j)
            {
            if(grid[i][j]=='p')
                {
                pi=i;
                pj=j;
            }
            if(grid[i][j]=='m')
                {
                mi=i;
                mj=j;
            }
        }
    }
    
    di=pi-mi;
    dj=pj-mj;
    
    if(dj>0)
        for(i=1;i<=dj;++i)
         cout<<"RIGHT\n";
    if(dj<0)
        for(i=1;i<=std::abs(dj);++i)
         cout<<"LEFT\n";
    if(di>0)
        for(i=1;i<=di;++i)
         cout<<"DOWN\n";
    if(di<0)
        for(i=1;i<=std::abs(di);++i)
         cout<<"UP\n";   
}
int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
