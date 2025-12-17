class Solution {
public:
    string reverseWords(string s) {
        
        
        int n=s.size();
        int l=0,r=n-1;
        while(l<n && s[l]==' ') l++;
        while(r>=l && s[r]==' ') r--;
        string res=s.substr(l,r-l+1);
        reverse(res.begin(),res.end());
        
        

        int j=0;
        for(int i=0;i<=res.size();i++){
            
            if( i==res.size() || res[i]==' '){
                reverse(res.begin()+j,res.begin()+i);
                j=i+1;

            }
        }
        string ans;
        for(int i=0;i<res.size();i++){
            if(res[i]!=' ' || (i>0 && res[i-1]!=' ')){
                ans.push_back(res[i]);
            }
        }
        return ans;
    }
};