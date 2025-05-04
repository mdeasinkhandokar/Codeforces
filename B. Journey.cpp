
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///https://codeforces.com/contest/2051/problem/B
int main(){

optimize();


int t;
cin>>t;
while(t--){

    int n, a,b,c;
    cin>>n>>a>>b>>c;

    int sum=a+b+c;
    int div= n/sum;
    int rem=n%sum;

    if(rem==0){
        cout<<3*div<<endl;
    }
    else{
        int total=0,day=0;
        if(rem>0){
            total+=a;
            day++;
        }
        if(rem>total){
            total+=b;
            day++;
        }
        if(rem>total){
            total+=c;
            day++;
        }
        cout<<3*div+day<<endl;
    }


}


return 0;
}

