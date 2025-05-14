#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;

int t;
cin>>t;

while(t--){
    int n,d;
    cin>>n>>d;


    string s;
    cin>>s;

    string ans="";
    bool flag =true;
    for(int i=0;i<n;i++){
        int tmp=(s[i]-'0');
        if(d>tmp){
            ans+=to_string(d);
            flag =false;
            for(int j=i;j<n;j++)ans +=s[j];

                break;
        }
            ans+=s[i];
    }

        if(flag) ans+=to_string(d);
        cout<<ans<<endl;
    }










 return 0;
}

