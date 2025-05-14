#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int solve(){
    string s;
    cin>>s;
    int n=s.size();

    int ans=1;
    if(s[0]=='?'){
        ans=9;

    }
    else if(s[0]=='0'){
        cout<<0<<endl;
        return 0;
    }
    for(int i=1;i<n;i++){
        if(s[i]=='?'){
            ans*=10;

        }
    }

    cout<<ans<<endl;
return 0;
}
int main(){


Faster;
int t=1;
cin>>t;
while(t--){
    solve();

}






 return 0;
}

