#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
void solve(){
    int n,value,sum=0;
    cin>>n;  
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>value;
        v.push_back(value);
        sum+=v[i];
    }
    int m=n/2;
    int p=sum/m;
    map<int,int>mp;
    for(int i=0;i<n/2;i++){
        for(int j=i+1;j<n-1;j++){
            if(v[i]+v[j]==p){
                int l=i;int k=j;
                mp.insert({++l,++k});
                break;
            }
        }
    }
    for(auto a:mp){
        cout<<a.first<<" "<<a.second<<endl;
    }


   
}   
int main(){
    ios_base::sync_with_stdio(false);
    //int T;
   // cin>>T;
   // for(int tc=0;tc<T;tc++)
    //{
    solve();
    //}
    return 0;
}  