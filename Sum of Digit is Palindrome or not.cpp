
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///https://www.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1

int main(){

optimize();

string s;
cin>>s;

int sum=0;

for (auto u:s){
    sum+=(u-'0');

}

string str=to_string(sum);

string tmp=str;
reverse(tmp.begin(),tmp.end());
if(tmp==str){
    cout<<"Yes"<<endl;
}
else{
    cout<<"NO"<<endl;
}


return 0;
}

