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
    ll n;
cin>>n;
ll x;
cin>>x;
ll a[n];
for(int i =0; i<n; i++){
  cin>>a[i];
}

ll sum =0;
ll sum2 =0;
for(int i =0; i<n; i++){
sum2+=(a[i]+x-1)/x;
sum+=a[i];
}

cout<<(sum+(x-1))/x<<" "<<sum2<<endl;
}




return 0;
}


