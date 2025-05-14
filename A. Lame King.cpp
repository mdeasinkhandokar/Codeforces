#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;

int t; cin>>t;

while(t--){
    int a,b;
    cin>>a>>b;
   a=abs(a);
   b=abs(b);
    int ans= a+b;
    int diff= max(a,b)-min(a,b);
    ans+=max(0,diff-1);
    cout<<ans<<endl;

}






 return 0;
}
