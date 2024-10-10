#include<bits\stdc++.h>
using namespace std;

void dfs(int 1)

void solve(vector<vector<char>board)
{
    int n = board.size();
    int m = board[0].size;

    vector<vector<int>> vis(n,vector<int>(m,0));
    for(int j = 0;j<m;j++)
    {

    }

}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    vector<vector<char>>board{{'X','X','X','X'},{'X','O','O','X'},
    {'X','X','O','X'},{'X','O','X','X'}};

    solve(board);

    for (auto row = board.begin(); row !=board.end(); ++row) 
    {
      for (auto col = row->begin(); col != row->end(); ++col) 
      {
          cout<<*col<<" "; //printing the values of board[i][j]
      }
      cout<<"\n";
    }


    return 0;
}