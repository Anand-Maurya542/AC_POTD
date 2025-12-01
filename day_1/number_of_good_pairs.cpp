class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto x:mpp){
            int n=x.second;
            cnt+=n*(n-1)/2;
        }
        return cnt;
    }
};