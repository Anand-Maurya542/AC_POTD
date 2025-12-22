class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int l1=abs(ax2-ax1),l2=abs(bx2-bx1);
        int b1=abs(ay2-ay1),b2=abs(by2-by1);
        int overL=max(0,min(ay2,by2)-max(ay1,by1));
        int overB=max(0,min(ax2,bx2)-max(ax1,bx1));
        long long area=1LL*l1*b1+1LL*l2*b2-1LL*overL*overB;
        return area;

        
    }
};