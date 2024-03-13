class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int right=0;
        int diff=0;
        int maxd=0;
        while(right<prices.size()-1){
            if(diff<0){
                left=right;
                right++;
                diff=prices[right]-prices[left];
                maxd=max(maxd,diff);
            }
            else{
                right++;
                diff=prices[right]-prices[left];
                maxd=max(maxd,diff);
            }
        }
        return maxd;
    }
};