#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define Faster ios_base:: sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){

Faster;

int t;
cin>>t;
while(t--){

    int n;
    cin>>n;
    string s;
    cin>>s;
    string z=s;
    sort(z.begin(),z.end());
    int k=0;
    for(int i=0;i<n;i++)
        {
        if(s[i]!=z[i])k++;

    }
    cout<<k<<endl;


}





 return 0;
}


