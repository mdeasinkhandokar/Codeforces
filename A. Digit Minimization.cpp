#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;

    vector<int>v;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]-'0');

    }
    sort(v.begin(),v.end());
    if(s.size()==2)cout<<s[1]<<endl;
    else cout<<v[0]<<endl;
}






 return 0;
}


