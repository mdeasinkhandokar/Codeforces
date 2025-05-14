#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;

int t;
cin>>t;

while(t--){

    ll n,m;
    cin>>n>>m;
    if(n==1&& m==1){
        cout<<"0"<<endl;
        continue;
    }
    if(m>n){
       swap(n,m);
    }
    int ans =(2*(m-1))+(n-1)+1;
    cout<<ans<<endl;

}





 return 0;
}

