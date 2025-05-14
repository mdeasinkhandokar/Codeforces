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
    ll ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];


        sort(ar,ar+n);
        ll cnt=0;
        ll ans=0;
        ll mx=0;

        for(int i=0;i<n;i++)
            {
            while(ar[i]%2==0)
            {
                cnt++;
                ar[i]/=2;

            }
            ans+=ar[i];
            mx=max(mx,ar[i]);

        }
        ll y=mx;

        for(int i=1;i<=cnt;i++)
            {
            y*=2;

        }
        ans+=y;
        ans-=mx;
         cout<<ans<<endl;
    }






}


