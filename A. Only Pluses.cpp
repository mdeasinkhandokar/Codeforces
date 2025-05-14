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

    vector<int>vec(3);
    for(int i=0;i<3;i++){
        cin>>vec[i];
    }
    for(int i=0;i<5;i++){
        sort(vec.begin(),vec.end());
        vec[0]++;

    }
    int product=1;
    for(int i=0;i<3;i++){
        product*=vec[i];

    }

    cout<<product<<endl;


}



return 0;
}

