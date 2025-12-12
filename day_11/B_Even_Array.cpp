#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,num,odd=0,even=0;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>num;
        arr.push_back(num);
    }
    for(int i=0;i<n;i++){
        if( (arr[i]%2!=i%2) && i%2){
            odd++;
        }
        else if((arr[i]%2!=i%2) && i%2==0)
                even++;
    }
    if(even==odd) cout<<even<<"\n";
    else cout<<-1<<"\n";
  
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();

    }
    return 0;
}