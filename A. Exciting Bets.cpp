#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();


ll t;
cin>>t;
while(t--){
    ll  a,b;
    cin>>a>>b;
    ll diff=abs(a-b);

    if(a==b){
        cout<<0<<" "<<0<<endl;
        continue;


    }
    ll x=a%diff;
    ll y=b%diff;

    if(x!=y)cout<<0<<" "<<0<<endl;
    else{
        ll ans=min(diff-x,x);
        cout<<diff <<" "<<ans<<endl;
    }

}



return 0;
}


