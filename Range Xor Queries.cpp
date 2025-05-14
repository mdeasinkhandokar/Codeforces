#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

const  int mx= 2e5+123;
int a[mx], sum[mx];


int main(){

Faster;

int n,q;
cin>>n>>q;
for(int i=1;i<=n;i++) cin>>a[i];
for(int i=1;i<=n;i++){
    sum[i]=sum[i-1]^a[i];

}
while(q--){
    int l,r;
    cin>>l>>r;
    cout<<(sum[r]^sum[l-1])<<endl;

}







 return 0;
}

