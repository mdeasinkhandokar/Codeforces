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
     map<char,int>mp;
     int ans=0;
     for(int i=0;i<s.size();i++){
        if(s[i]>='a'&& s[i]<='z'){mp[s[i]]=1;
        }
        else{
            char z=s[i]+32;
            if(mp[z]==0){
                ans=1;
                break;
            }
        }
     }
     if(ans==0)cout<<"Yes"<<endl;
     else cout<<"NO"<<endl;
}






 return 0;
}


