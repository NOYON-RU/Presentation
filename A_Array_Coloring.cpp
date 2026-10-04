#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
void solve(){
    ll n,value;
    cin>>n;
    //vector<int>a;
    int odd=0,even=0;
    for(int i=0;i<n;i++){
         cin>>value;
         //a.push_back(value);
         if(value%2==0){
            even++;
         }
         else{
            odd++;
         }
    }
    if(n%2==0&&odd%2==0&&even%2==0){
        cout<<"YES"<<endl;
    }
    else if(n%2==1&&odd%2==0){
        cout<<"YES"<<endl;
    }
    else if(n%2==1&&even%2==1&&odd%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
     
}   
int main(){
    ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    for(int tc=0;tc<T;tc++)
    {
        solve();
    }
    return 0;
}  