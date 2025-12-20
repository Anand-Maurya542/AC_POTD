class Solution {
public:
    string compressedString(string word) {
        string comp="";
        for(int i=0;i<word.size();){
            char ch=word[i];
            int cnt1=0;
            while(i<word.size() && word[i]==ch && cnt1<9){
                cnt1++;
                i++;
            }
        
            comp+=char('0'+cnt1);
            comp+=ch;
            
        }
        return comp;
        
    }
};