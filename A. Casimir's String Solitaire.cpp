#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;
int t;
cin>>t;
while(t--){

    int a=0,b=0,c=0;
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        if(s[i]=='A')a++;
        else if(s[i]=='B')b++;
        else c++;

    }
    if(a+c==b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



}






 return 0;
}


