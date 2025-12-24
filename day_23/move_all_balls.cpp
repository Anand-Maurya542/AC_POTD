class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(boxes[i]=='1')
            mp[i]=1;
        }
        for(int i=0;i<n;i++){
            int sum=0;
            for(auto &x:mp){
                sum+=abs(i-x.first);
            }
            ans.push_back(sum);
        }
        return ans;
        
    }
};