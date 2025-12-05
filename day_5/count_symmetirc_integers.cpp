class Solution {
public:
    bool sumN(int num,int size){
        int sum1=0,sum2=0,n=size;
        while(size>n/2)
        {
            sum1+=num%10;
            num/=10;
            size--;

        }
        while(size>0){
            sum2+=num%10;
            num/=10;
            size--;
        }
        if(sum1==sum2) return true;
        else return false;
        

    }
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low;i<=high;i++){
            int size=to_string(i).size();
            if(size%2==0){
                if(sumN(i,size)) cnt++;

            }
        }
        return cnt;
    }
};