#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///https://codeforces.com/contest/112/problem/A
int main(){

optimize();

string s1,s2;
cin>>s1>>s2;

for(int i=0;i<s1.size();i++)s1[i]=tolower(s1[i]);
for(int i=0;i<s2.size();i++)s2[i]=tolower(s2[i]);

if(s1<s2)cout<<"-1"<<endl;
else if (s1>s2)cout<<"1"<<endl;
else cout<<"0";


return 0;
}


