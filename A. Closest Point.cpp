#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void CoderEasin(){

int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
if(n>2){
    cout<<"NO"<<endl;

}
else if(v[1]-v[0]==1){
        cout<<"NO"<<endl;

}
else{
    cout<<"YES"<<endl;
}







}


int main(){

optimize();

int t;
cin>>t;

while(t--){
   CoderEasin();
}

return 0;
}


