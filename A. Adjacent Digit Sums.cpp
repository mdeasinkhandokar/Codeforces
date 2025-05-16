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
    int x,y;
    cin>>x>>y;

   if(y==x+1 || (y<=x-8 &&(x-y+1)%9==0))cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}


return 0;
}


