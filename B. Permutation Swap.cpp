#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();

   int t;                  cin>>t;
   while(t--){
      int n;               cin>>n;

      vector<int> a(n+1);

      int ans=0;

      for(int i=1;i<=n;i++){
            cin>>a[i];
      }

      for(int i=1;i<=n;i++){
            ans=__gcd(ans,abs(a[i]-i));
      }

      cout<<ans<<endl;

   }

return 0;
}


