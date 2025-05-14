 #include <bits/stdc++.h>
    using namespace std;
    #define ll long long int
    #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



    int main(){
       Faster;
       int t;                  cin>>t;
       while(t--){
          int n;               cin>>n;

          vector<ll> a(n);
          for(int i=0;i<n;i++){

             cin>>a[i];
          }
int ans;
          sort(a.begin(),a.end());



          if(a[0]<0){
             ans=a[0];
          }
          else{
             ans=a[n-1];
          }

          cout<<ans<<endl;
       }
       return 0;
    }













