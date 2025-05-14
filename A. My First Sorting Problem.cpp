#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();

int t;
cin>>t;

while(t--){
     ll x,y;
     cin>>x>>y;

     cout<<min(x,y)<< " "<<max(x,y)<<endl;
}



return 0;
}


