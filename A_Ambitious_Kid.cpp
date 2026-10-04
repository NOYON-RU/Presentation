#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll n,value;
    cin>>n;
    vector<ll>a;
    for(int i=0;i<n;i++){
        cin>>value;
        if(value>=0){
            a.push_back(value);
        }
        else{
            a.push_back(abs(value));
        }
    }
    vector<ll>::iterator it = min_element(a.begin(),a.end());
    cout<<*it<<endl; 
     
    return 0;
}  