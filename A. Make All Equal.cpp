#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();
int t;
cin>>t;

while(t--)
{
    int n;
    cin>>n;
    int freq=0;
    map<int,int>m;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        m[x]++;
        freq=max(freq,m[x]);

    }
    cout<<n-freq<<endl;








}
return 0;
}


