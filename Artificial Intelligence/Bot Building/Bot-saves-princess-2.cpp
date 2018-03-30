#include <iostream>
#include <vector>
using namespace std;
void nextMove(int n, int r, int c, vector <string> grid){
    //your logic here
         int i,j,pi,pj,up,left;
    for(i=0;i<n;++i)
        {
        for(j=0;j<n;++j)
            {
            if(grid[i][j]=='p')
                {
                pi=i;
                pj=j;
            }
            
        }
    }
   if((up=pi-r)<0)
   {
    printf("UP\n");
    return;
  } 
    else if(up>0)
   {
    printf("DOWN\n");
    return;
  }


  if ((left=pj-c)<0)
  {
    printf("LEFT\n");
    return;
  } 
    else if(left>0)
  {
    printf("RIGHT\n");
    return;
  }
        


   
}
int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
