class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        priority_queue<int> pq;
        vector<int> f(26);
        for(char c:s){
            f[c-'a']++;
        }
        for(int x:f){
            if(x>0) pq.push(x);
        }
        while(k--){
            int x=pq.top();
            x--;
            if(!pq.empty())
            pq.pop();
            pq.push(x);
        }
        long long sum=0;
        while(!pq.empty()){
            int x=pq.top();
            sum+=x*x;
            pq.pop();
        }
        return sum;
    }
};