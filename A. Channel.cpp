#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;
ll t;
cin>>t;
while(t--){
    ll n,a,q;
    cin>>n>>a>>q;
    string s;
    cin>>s;

    ll ans=0;
    ll cn=a;
    for(ll i=0;i<q;i++){
        if(a>=n){
            ans=1;

        }
        if(s[i]=='-'){
            a--;
        }else{
        cn++;
        a++;
        }
        if(a>=n){
            ans=1;
        }
    }
    if(cn>=n&& ans==0){
        ans=2;

    }
    if(ans==1){
        cout<<"YES"<<endl;

    }else if(ans==2){
    cout<<"MAYBE"<<endl;

    }else{
    cout<<"NO"<<endl;

    }
}






 return 0;
}


