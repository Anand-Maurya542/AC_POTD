#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,even=0,odd=0;
    
    cin>>n;
    if(n==2 || n%2 || (n/2)%2) cout<<"NO \n";
    else{
        cout<<"YES \n";
        for(int i=1;i<=n/2;i++){
            cout<<i*2<<" ";
            even+=i*2;
        }
        for(int i=0;i<(n/2-1);i++){
            cout<<i*2+1<<" ";
            odd+=i*2+1;
        }
        cout<<even-odd;
        cout<<"\n";
        
        
    }
}
int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;

}