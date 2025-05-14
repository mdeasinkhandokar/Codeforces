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
    int lower_bound=0, upper_bound=1e9;

    set<int>st;
    for(int i=0;i<=n;i++){
        int operation ,value;
        cin>>operation>>value;

        if(operation ==1)lower_bound= max(lower_bound,value);
        else if(operation ==2)upper_bound=min(upper_bound,value);

        else st.insert(value);

    }
    int ans=upper_bound -lower_bound+1;

    for(auto val :st){
        if(lower_bound<=val && val<=upper_bound)ans -=1;
    }
    if(ans>0)cout<<ans<<endl;
    else cout<<0<<endl;
}


return 0;
}


