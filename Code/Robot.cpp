#include<bits/stdc++.h>
using namespace std;
bool robot(int prices[],int n,int k,int c)
{
    for(int i=0;i<n;++i)
    {
        if(prices[i]<=c)
        k--;
    }
    if(k==0)
    return true;
    else
    return false;
}
int main()
{
    int n;
    cin>>n;
    int prices[n];
    for(int i=0;i<n;++i)
    {
        cin>>prices[i];
    }
    int k;
    cin>>k;
    int c;
    cin>>c;
    cout<<robot(prices,n,k,c);
}