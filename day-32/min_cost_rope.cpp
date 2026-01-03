class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        if(arr.size()==1 || arr.size()==0) return 0;
        
        priority_queue<int,vector<int>,greater<int>> h;
        for(int x:arr){
            h.push(x);
        }
        int cost=0,temp=0;
       
        while(!h.empty()){
            cost=0;
             cost += h.top();
        
            if(!h.empty())
                h.pop();
            
           
            cost+=h.top();
             if(!h.empty())
                h.pop();
            temp+=cost;
            if(h.empty()) break;
            h.push(cost);
            
        }
        return temp;
        
        
    }
};