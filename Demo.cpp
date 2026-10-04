#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pb  push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define srt(v) sort(v.begin(),v.end());
#define print(a) for(auto it:a) cout<<it<<" ";
void solve(){
         int n;
         cin>>n;
         vector<int>a;
         for(int i=0;i<n;i++){
                int x;
                cin>>x;
                a.pb(x);    
                
         }
         if(n==1) cout<<"NO"<<endl;
         else{
             bool t=true;
              for(int i=1;i<n;i+=2){
                      if((a[i]+1)==a[i-1]||a[i]==(a[i-1]+1)){
                            t=false;
                            break;
                      }
             }
             if(t==true) cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
       }   
         
}
 int main(){
     
       //freopen("t.txt","r",stdin);
       ios_base::sync_with_stdio(false);
       int T;
       cin>>T;
        for(int tc=0;tc<T;tc++)
        {
            solve();
        }
        return 0;
        
  }
   git clone https://github.com/NOYON-RU/Presentation.git