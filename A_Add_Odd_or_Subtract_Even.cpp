#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
void solve(){
    long long a,b;
    cin>>a>>b;
    long long c=a-b;
    if(c<0){
        if(abs(c)%2==1){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    else if(c>0){
        if(c%2==1){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    else{
        cout<<0<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    ios_base::sync_with_stdio(false);
    int T;
    cin>>T;
    for(int tc=0;tc<T;tc++)
    {
        solve();
    }
    return 0;
}