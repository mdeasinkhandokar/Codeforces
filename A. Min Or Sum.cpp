#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;
int t;
cin>>t;
int ans=0;
while(t--){
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    ans=(ans|x);

   }
   cout<<ans<<endl;
}






 return 0;
}


