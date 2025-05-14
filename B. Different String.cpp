#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();

int t;
cin>>t;

while(t--){
    string s;
    cin>>s;

    unordered_map<char, int> mp;
    for(auto it :s)
        mp[it]++;
    if(mp.size()==1)
        cout<<"NO"<<endl;

    else{
        cout<<"YES"<<endl;

        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                swap(s[i],s[i+1]);
                break;
            }
        }
          cout<<s<<endl;

    }


}


return 0;
}


