class Solution {
public:
using pi=pair<int,int>;
struct cmp {
    bool operator()(const pi &a, const pi &b) {
        return a.first < b.first;  
    }
};
    long long pickGifts(vector<int>& gifts, int k) {
        // priority_queue<pi,vector<pi>,cmp> h;
        // for(int i=0;i<gifts.size();i++){
        //     h.push({gifts[i],i});
        // }
        // for(int i=0;i<k;i++){
        //     int ind=h.top().second;
        //     gifts[ind]=floor(sqrt(gifts[ind]));
        //     h.pop();
        //     h.push({gifts[ind], ind});
        // }
        // long long sum=accumulate(gifts.begin(),gifts.end(),0LL);
        // return sum;

        priority_queue<int> h;
        for(int x:gifts){
            h.push(x);
        }
        long long sum=0;
        while(k--){
            int x=h.top();
            h.pop();
            h.push(floor(sqrt(x)));
        }
        while(!h.empty()){
            sum+=h.top();
            h.pop();
        }
        return sum;

    }
};