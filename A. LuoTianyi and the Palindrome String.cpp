#include<bits/stdc++.h>
using namespace std;

#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n=s.size();
    if(count (s.begin(),s.end(),s[0])==n){
        cout<<-1<<endl;
        continue;

    }
    bool ispalindrome=true;
    int l=0, r=n-1;
    while(l<r){
        while(l<r){
            if(s[l]!=s[r]){
                ispalindrome=false;
                break;

            }
            l++;
            r--;

        }
        if(!ispalindrome){
            cout<<n<<endl;

        }
        cout<<(n-1)<<endl;

    }
}

    return 0;
}









