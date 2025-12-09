#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a ;
}
int lcm(int n1,int n2){
    return (n1/gcd(n1,n2)*n2);

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,num,x=1;
        cin>>n;
        vector<int>nums;
        for(int i=0;i<n;i++){
            cin>>num;
            nums.push_back(num);
        }
        for(int i=0;i<n;i++){
            x=lcm(x,nums[i]);
        }
        cout<<x<<"\n";
    }
}