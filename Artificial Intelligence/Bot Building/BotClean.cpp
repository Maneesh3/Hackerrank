#include<iostream>
#include<vector>
using namespace std;
void next_move(int posr, int posc, vector <string> board) {
   
         int x=-1,y=-1,e=0;
    if(board[posr][posc]=='d')
    { printf("CLEAN\n");
    }
    else
        {
          do 
        {
            x++;
            y=-1;
        do
        {
            y++;
            if (board[x][y]=='d')
            {
                e=1;
            }
        }while((e!=1)&&(y<4));
    }while(e!=1);
  
   
   if(x<posr)
   {
    printf("UP\n");
  
  } 
    else if(x>posr)
   {
    printf("DOWN\n");
    
  }
  else if (y<posc)
  {
    printf("LEFT\n");
    
  } 
    else
  {
    printf("RIGHT\n");
   
  }
    }
    
    //add logic here
}
int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}
