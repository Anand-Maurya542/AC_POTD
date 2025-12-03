class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2,
                              vector<int>& nums3) {
        vector<int> ans;
        set<int> seen1, seen2;
        for (auto n1 : nums1) {
            seen1.insert(n1);
        }
        for (auto n2 : nums2) {
            if (seen1.count(n2) && find(ans.begin(), ans.end(), n2) == ans.end())
                ans.push_back(n2);
            else
                seen2.insert(n2);
        }
        for (auto n3 : nums3) {
            if ((seen1.count(n3) ||  seen2.count(n3)) && 
            find(ans.begin(), ans.end(), n3) == ans.end())

                ans.push_back(n3);
        }
        
        return ans;
    }
};