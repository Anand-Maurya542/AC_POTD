#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> dist;
         vector<int>tw,h;
        int hs=0,tower=0,n,m,mini=INT_MAX;
        cin>>n;
        cin>>m;
        for(int i=0;i<n;i++){
            cin>>hs;
            h.push_back(hs);
        }
        for(int i=0;i<m;i++){
            cin>>tower;
            tw.push_back(tower);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int distance=abs(abs(tw[i])-abs(h[j]));
                dist.push_back(distance);
            }
         int d=*max_element(dist.begin(),dist.end());
         mini=min(mini,d);

        }
       
        cout<<mini<<"\n";


    }
}