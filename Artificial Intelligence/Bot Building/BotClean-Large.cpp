#include<iostream>
#include<vector>
using namespace std;
void next_move(int posr, int posc, int dimh, int dimw, vector <string> board) {
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
        }while((e!=1)&&(y<dimw));
    }while(e!=1);
  
   
   if(x<posr)
   {
    printf("UP\n");
    return;
  } 
    else if(x>posr)
   {
    printf("DOWN\n");
    return;
  }
  else if (y<posc)
  {
    printf("LEFT\n");
    return;
  } 
    else
  {
    printf("RIGHT\n");
    return;
  }
    } //add logic here
}
int main(void) {
    int pos[2];
    int dim[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    cin>>dim[0]>>dim[1];
    for(int i=0;i<dim[0];i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], dim[0], dim[1], board);
    return 0;
}
