class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // this is the question of sliding and i did it today so i knwo the ans

        int left = 0;
        int mp = 0;

        for(int right = 0 ;right < prices.size() ; right++){
            if(prices[right] < prices[left]){
                left = right;
            }
            mp = max(mp , prices[right]-prices[left]);
        }
        return mp;
    }
};
