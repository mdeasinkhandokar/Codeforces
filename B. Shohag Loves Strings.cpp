#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


///https://codeforces.com/problemset/problem/2039/B


int main(){

optimize();

ll t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    ll f=0,n;
    n=s.size();
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            cout<<s[i]<<s[i]<<endl;
            f=1;
            break;

        }
    }

    if(f==0){
        for(int i=0;i<n-2;i++){
            set<char>st;
            st.insert(s[i]);
            st.insert(s[i+1]);
            st.insert(s[i+2]);
            if(st.size()==3){
                cout<<s[i]<<s[i+1]<<s[i+2]<<endl;
                f=1;
                break;
            }
        }
    }
    if(f==0){
        cout<<-1<<endl;
    }
}


return 0;
}

