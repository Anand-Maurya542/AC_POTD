#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    while(n--){
        
        string str;
        cin>>str;
        if(str=="++X" || str=="X++") x++;
        if(str=="--X" || str=="X--") x--;
      

    }
    cout<<x;
}