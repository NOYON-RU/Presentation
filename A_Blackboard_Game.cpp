#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
void solve(){
     int n;
     cin>>n;
     if(n%4==0){
        cout<<"Bob"<<endl;
     }
     else{
        cout<<"Alice"<<endl;
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