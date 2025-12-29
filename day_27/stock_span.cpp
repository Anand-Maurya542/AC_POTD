class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        int n=arr.size();
        stack<pair<int,int>> st;
        vector<int> ans(n);
        
        for(int i=0;i<n;i++){
            int span=1;
            while(!st.empty() && arr[i]>=st.top().first){
                span+=st.top().second;
                st.pop();
            }
            ans[i]=span;
            st.push({arr[i],span});
        }
        return ans;
        
    }
};