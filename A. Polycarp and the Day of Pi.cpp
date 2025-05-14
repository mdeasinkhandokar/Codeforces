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
    string a="3141592653589793238462643383279502884197";
    int idx=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=a[idx]){
            break;

        }
        else{
            idx++;
                }

    }
    cout<<idx<<endl;




}



 return 0;
}

