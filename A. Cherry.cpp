#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;
int t;
cin>>t;
while(t--){
   ll n;
   cin>>n;
   ll arr[n+3];
   ll ans=0;
  for(int i=0;i<n;i++) cin>>arr[i];
  for(int i=0;i<n-1;i++){
    ans=max(ans, arr[i]*arr[i+1]);

  }
    cout<<ans<<endl;



}






 return 0;
}


