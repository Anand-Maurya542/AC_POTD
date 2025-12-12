class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        if(digits[n]<9) digits[n]+=1;
        else if(digits.size()==1 && digits[n]==9){
            digits[n]=1;
            digits.push_back(0);
        }
        else if(digits.size()>1 && digits[n]==9){
            int i=n;
            while(i>=0 && (i-1)>=0){
                digits[i]=0;
                digits[i-1]+=1;
                if(digits[i-1]<=9) break;
                i--;

            }
            if(digits[0]==10){
                digits[0]=1;
                digits.push_back(0);
            }
        }
        return digits;
   }
};