#include<bits/stdc++.h>
using namespace std;

using ll =long long;

int main(){

ios_base:: sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--){
ll m,n;
cin>>m>>n;
ll arr1[m],arr2[n];
ll sum1=0,sum2=0;
for(ll i=0;i<m;i++){
    ll a;
    cin>>a;
    arr1[i]=a;
    sum1+=arr1[i];


}
for(ll i=0;i<n;i++){
    ll a;cin>>a;
    arr2[i]=a;
    sum2+=arr2[i];

}
if(sum1>sum2){
    cout<<"Tsondu"<<endl;

}
else if(sum1<sum2){
    cout<<"Tenzing"<<endl;

}

else{
    cout<<"Draw"<<endl;
}
}
return 0;
}









