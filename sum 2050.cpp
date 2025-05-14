#include<iostream>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
//typedef  usigned long long int  llu;

int main(){

ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;



int ans=0;
 while(n>=2050){
    ans++;
    ll x=2500;
    while(x<=n){
        x*=10;


    }
    x/=10;
   n=n-x;


 }

        if(n!=0)cout<<-1<<nl;
        else cout<<ans<<nl;

}









return 0;
}
