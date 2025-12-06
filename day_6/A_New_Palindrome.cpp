#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        int distinct=0,moreThanOne=0;
        vector<int> freq(26,0);
        for(char c:str){
            freq[c-'a']++;
        }
        for(char f:freq){
            if(f>0) distinct++;
            if(f>=2) moreThanOne++;
        }
        if(distinct==1){
            cout<<"NO \n";
            continue;
        } 
        if(moreThanOne>=2){
            cout<<"YES \n";
            continue;
        }
        cout<<"NO \n";
        
    
       
    }
    return 0;
    
}