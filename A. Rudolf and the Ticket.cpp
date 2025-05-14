#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();
int t;
cin>>t;

while(t--){
    int n,m,k;
    cin>>n>>m>>k;

    vector<int >a(n),b(m);

    for(auto &c:a) cin>>c;
    for(auto &c:b) cin>>c;

    int ans=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            ans+=(a[i]+b[j]<=k);

        }



cout<<ans<<"\n";



}




return 0;
}


