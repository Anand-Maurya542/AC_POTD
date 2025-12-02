class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> ans;
        int t=0,p1,p2;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C") ans.pop();
            else if(operations[i]=="D"){
                t=(ans.top());
                ans.push(t*2);

            }
            else if(operations[i]=="+"){
                p2=(ans.top());
                ans.pop();
                p1=(ans.top());
                ans.pop();
                t=p1+p2;
                ans.push(p1);
                ans.push(p2);
                ans.push(t);
            }
            else ans.push(stoi(operations[i]));
        }
        int sum=0;
        while(!ans.empty()){
            sum+=ans.top();
            ans.pop();

        }
        return sum;

    }
};