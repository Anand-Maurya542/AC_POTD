#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a,ans=0;
    cin>>n>>k;
    int i=n;
    vector<int>p;
    while(n--){
        cin>>a;
        p.push_back(a);
    }
    while(i--){
        if(p[i]>=p[k-1] && p[i]>0) ans++;
    }
    cout<<ans;
}