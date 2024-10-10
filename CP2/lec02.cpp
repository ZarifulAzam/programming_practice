#include<bits\stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    
  //cout<<"ok";
  //step 01
  vector<int>v;
  //step 02
  int n =8,sum = 0;
  for(int i=0;i<8;i++)
  {
    cin>>v[i];
  }
  for(auto i:v) cout<<i<<" ";
// for(int i =0;i<n;i++)
// {
//     sum=sum+v[i];
    cout<<sum;
// }
for(int i=0; i<n i ++)sum+=v[i]
int k=3
int windosum = 0;for(int i=0;i<n-k+1;i++)
{

    // for(int j=0;j<k;j++)
    // {
    //     sum++v[j+1];
    // }

    sum-=v[i-1];
    sum+=v[i+k-1];
    cout<<sum<<""

}

    return 0;
}
