#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///https://codeforces.com/contest/2117/problem/D



int main(){

optimize();

int t;
cin>>t;

while(t--){

    ll n;
    cin>>n;
    vector<ll>a(n);
    for (auto &x:a)cin>>x;
    if(2*a[0]-a[1]<0||(2*a[0]-a[1])%(n+1)!=0){
         cout<<"NO"<<endl;
         continue;
    }
    ll x2=(2*a[0]-a[1])/(n+1);
    ll x1=a[0]-n*x2;

    if(x1<0){
        cout<<"NO"<<endl;
        continue;

    }
    bool pos=true;

    for(ll i=1;i<=n;i++){
        if(a[i-1]-i*x1-(n-i+1)*x2!=0)pos=false;

    }
    if(pos){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}


return 0;
}


