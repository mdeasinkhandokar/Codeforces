#include<bits/stdc++.h>
using namespace std;

#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main(){

Faster;
int t;
cin>>t;

for(int i=1;i<=t; i++){
    string s;
    string r="codeforces";
    cin>>s;
    int k=0;
    for(int j=0;j<=9;j++){
        if(s[j]!=r[j]){
            k++;

        }
    }
    cout<<k<<endl;

}


return 0;





}
