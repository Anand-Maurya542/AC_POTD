#include<bits/stdc++.h>

using namespace std;

void solve(){
   string s;
   cin>>s;
   for(int i=0;i<s.size();i++){
    int d=s[i]-'0';
        if(d>4){
            int nd=9-d;
        if(i==0 && nd==0) continue; //avoid leading 0
        s[i] =  nd+'0';
    } 
    }
    cout<<s<<"\n";

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    
    return 0;
}