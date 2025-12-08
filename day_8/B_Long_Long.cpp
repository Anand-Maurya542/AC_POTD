#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,l=0,r=0,op=0,f=0;
    long long sum=0;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        
        if(num<0)
        sum=sum-num;
        else sum+=num;
        arr.push_back(num);
    }

    while(r<n){
        if(arr[r]<=0){
            if(arr[r]!=0)
            f=1;
            r++;
           
        }
        else{
           
            l=r;
            r++;
            l++;
            if(f==1){
                f=0;
                op++;
            }
        }
    }
    if(f==1)
    op++;
  
    cout<<sum<<" "<<op<<"\n";



}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();

    }
    return 0;
}