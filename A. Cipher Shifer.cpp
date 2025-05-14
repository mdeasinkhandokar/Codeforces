#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;
int t;
cin>>t;

while(t--){

    int n;
    cin>>n;
    string s;
    cin >>s;
    string ans="";
    for(int l=0,r=l+1;r<n;){
        if(s[l]==s[r]){
            ans.push_back(s[l]);
            l=r+1,r=r+2;

        }
        else{
            r++;

        }
    }

    cout<<ans<<endl;
}
return 0;
}






















