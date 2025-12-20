class Solution {
public:
    int minPartitions(string n) {
        int cnt=0;
        for(int i=0;i<n.size();i++){
            int num=n[i]-'0';
            cnt=max(cnt,num);
        }
        return cnt;
        
    }
};