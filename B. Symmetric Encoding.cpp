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
    string str;
    int n;
    cin>>n>>str;


    vector<int>v;
    for(int i=0;i<n;i++){
        v.push_back(str[i]);
    }
    sort(v.begin(),v.end());
    v.resize(unique(v.begin(),v.end())-v.begin());
    int m=v.size();

    for(int i=0;i<n;i++){
        int idx=lower_bound(v.begin(),v.end(),str[i])-v.begin();
        str[i]=v[m-1-idx];
    }
    cout<<str<<endl;
}


return 0;
}


