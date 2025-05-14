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
    int l,r,k;
    cin>>l>>r>>k;
    if(k==0){
    if(l!=1 &&l==r){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;

    }

    continue;
    }
    ll req=(r-l+1)/2;

    if(l%2==1 && r%2==1){
        req++;
    }

    if(req<=k){
            cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
    }



}



return 0;
}


