class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        vector<int> f(26,0);
        queue<char> q;
        string ans;
        for(char c:s){
            f[c-'a']++;
            q.push(c);
            
            while(!q.empty() && f[q.front()-'a']>1){
                q.pop();
            }
            if(q.empty()) ans+='#';
            else ans+=q.front();
            
            
        }
        return ans;
        
        
    }
    
};