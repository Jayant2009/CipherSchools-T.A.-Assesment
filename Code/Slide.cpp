#include<bits/stdc++.h>
using namespace std;
vector<int> Nunique(int n)
{
    vector<int> v;
    if(n%2!=0)
    v.push_back(0);

    for(int i=1;i<=n/2;++i)
    {
        v.push_back(i);
        v.push_back(-i);
    }
    return v;
}
int main()
{
     int n;
     cin>>n;
     vector<int>v;
     v=Nunique(n);
     for(int i=0;i<v.size();++i)
     {
         cout<<v[i]<<" ";
     }
}