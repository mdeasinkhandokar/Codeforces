#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
Faster;
int t;
cin>>t;

while(t--){


  ll n,k;
  cin>>n>>k;

  if(n%2==0 || n%k==0){
    cout<<"YES"<<endl;
    continue;
  }
  n=n-k;
  if(n<0 ||n%2==0){
    cout<<"YES"<<endl;
    continue;
  }
    else{
        cout<<"NO"<<endl;
    }

}







 return 0;
}

