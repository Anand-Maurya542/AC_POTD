#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,q,cnt=0;
        vector<int> arr;
        for(int i=0;i<n;i++){
            cin>>a;
            arr.push_back(a);
        }
        cin>>q;
        int q1,q2;
        vector<int> x,y;
        while(q--){
            cin>>q1;
            cin>>q2;
            for(int i=0;i<n;i++){
            for(int j=0;j<n;j=n-j){
                if((arr[i]+arr[j])==q1 && arr[i]*arr[j]*q2)
                    cnt++;
            }

        }

           
        cout<<cnt<<"\n";
        }
       
    }
}