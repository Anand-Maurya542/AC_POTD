//codeforces
#include <iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        int cnt=0;
        cin>>n;
        if(n<4 && n%2!=0) {
            cout<<0<<endl;
            continue;
        }
        if(n==2) cout<<1<<endl;
        else{
            for(int x=0;x<=n/2;x++){
                for(int y=0;y<=n/2;y++){
                    if((2*x+4*y)==n) cnt++;
                }
            }
            cout<<cnt<<endl;
        }
    }
    
}