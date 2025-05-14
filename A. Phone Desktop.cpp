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
    int x,y;
    cin>>x>>y;
            int ans = (y + 1) / 2;
        int rem = y / 2 * 7 + y % 2 * 11;
        x = max(0, x - rem);
        ans += (x + 14) / 15;
        cout << ans << "\n";
}


return 0;
}


