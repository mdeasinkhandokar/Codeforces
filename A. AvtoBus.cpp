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
    if(n%2==1 ||n<4)cout<<-1<<endl;

else{
    ll mn ,mx;
    int ans=0;
    mn=n/6;
    ll ob=n%6;
    if(ob!=0)mn++;
    mx=n/4;
 cout<<mn<<" "<<mx<<endl;
}
}





 return 0;
}


