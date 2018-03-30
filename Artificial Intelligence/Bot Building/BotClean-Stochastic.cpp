#include<iostream>
#include<vector>
using namespace std;
void nextMove(int posr, int posc, vector <string> board) {
        int i,j,pi,pj,up,left;
    
    for(i=0;i<5;++i)
        {
        for(j=0;j<5;++j)
            {
            if(board[i][j]=='d')
                {
                pi=i;
                pj=j;
                goto e;
            }
            
        }
    }
    e:
   if((up=pi-posr)<0)
   {
    printf("UP\n");
    return;
  } 
    else if(up>0)
   {
    printf("DOWN\n");
    return;
  }


  if ((left=pj-posc)<0)
  {
    printf("LEFT\n");
    return;
  } 
    else if(left>0)
  {
    printf("RIGHT\n");
    return;
  }
    if(board[posr][posc]=='d')
         printf("CLEAN\n");//add logic here
}
int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;
        cin >> s;
        board.push_back(s);
    }
    nextMove(pos[0], pos[1], board);
    return 0;
}
