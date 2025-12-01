#include <iostream>
using namespace std;
int main(){
    long long n,w,k,i=1,sum=0;
    cin>>k>>n>>w; //costPerBanana,totalMoney,BananasToBuy
    while(w--){
        sum=sum+i*k;
        i++;
       
    }
    if((sum-n)>0) cout<<sum-n;
    else cout<<0;
}