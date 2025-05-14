#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int ans=n/10;
    if(n%10==9)ans++;
    cout<<ans<<endl;
}






 return 0;
}


