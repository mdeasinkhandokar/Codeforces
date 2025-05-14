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
    int cnt=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='0'){
            if(s[i+1]=='0')cnt+=2;
            else if(s[i+2]=='0')cnt+=1;

        }
    }
    cout<<cnt<<endl;

}






 return 0;
}


