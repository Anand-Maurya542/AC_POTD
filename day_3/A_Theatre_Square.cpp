#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m>>a;
    long long tarea=(long long)n*m,ans=0;
    long long farea=a*a;
    if(farea>=tarea) cout<<1;
    else{
        ans=ceil((double)n/a)*ceil((double)m/a);
        cout<<ans;

    }

    
}