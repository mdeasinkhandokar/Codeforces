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
        int n;cin>>n;
    vector<int>vec(n+n);
    for(int i=0;i<n+n;i++)cin>>vec[i];
    sort(vec.begin(),vec.end());
    vector<pair<int,int>>pr;
    for(int i=0;i<n;i++){
        pr.push_back(make_pair(vec[i],vec[2*n-1-i]));

    }
    int ans=0;
    for(int i=1;i<n;i++){
        ans+=abs(pr[i-1].first-pr[i].first);
        ans+=abs(pr[i-1].second -pr[i].second);

    }
    cout<<ans<<endl;
    for(auto it:pr){
        cout<<it.first<<" "<<it.second<<endl;

    }
}



return 0;
}


