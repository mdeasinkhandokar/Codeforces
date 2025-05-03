///https://codeforces.com/contest/2094/problem/C

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();

 long long tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        long long arr[n+10][n+10];
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>arr[i][j];
                mp[i+j]=arr[i][j];
            }
        }
        vector<int>v;
        set<int>st;
        for(int i=1;i<=2*n;i++)
        {
           if(mp[i]!=0)
           {
               st.insert(mp[i]);
           }
        }
        for(int i=1;i<=2*n;i++)
        {
            if(st.find(i)==st.end())
            {
                v.push_back(i);
            }
        }
        for(int i=1;i<=2*n;i++)
        {
            if(mp[i]==0)
            {
                cout<<v.back()<<" ";
                v.pop_back();
            }
            else
            {
                cout<<mp[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
return 0;
}


