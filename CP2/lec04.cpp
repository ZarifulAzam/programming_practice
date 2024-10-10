#include<bits\stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int N;
    vector<pair<int,int>>adj[N];
    adj[1].push_back({2,5});
    adj[2].push_back({3,7});
    adj[2].push_back({4,6});
    adj[3].push_back({4,5});
    adj[4].push_back({1,2});
    for(auto u: adj[N])
    {
        cout<<u<<"";
    }

    return 0;
}