class Solution {
public:
    int countPrimes(int n) {
        int prime[n+1];
        for(int i=0;i<=n;i++){
            prime[i]=0;
        }
        // vector<bool> prime(n + 1, false);
        int count=0;
        for(int i=2;i<=sqrt(n);i++){
            if(prime[i]==0){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=1;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(prime[i]==0) count++;
        }
        return count;
    }
};