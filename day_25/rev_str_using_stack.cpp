class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char> st;
        for(char c:S){
            st.push(c);
        }
        string rev="";
        for(int i=0;i<S.size();i++){
            rev+=st.top();
            st.pop();
            
        }
        return rev;
    }
};