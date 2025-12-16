class Solution {
public:
    string reverseVowels(string s) {
        string vowel="aeiouAEIOU";
        int size=s.size();
        int i=0,j=size-1;
        while(i<size && j>=0 &&i<=j){
            if(count(vowel.begin(),vowel.end(),s[i])&&count(vowel.begin(),vowel.end(),s[j])){
                cout<<s[i]<<s[j]<<"\t";
                 swap(s[i],s[j]);
                  i++;
                    j--;

            }
               
            else if(!count(vowel.begin(),vowel.end(),s[i])){
                i++;               
            }
            else if(!count(vowel.begin(),vowel.end(),s[j])) j--;
            
        }
        return s;
        
    }
};