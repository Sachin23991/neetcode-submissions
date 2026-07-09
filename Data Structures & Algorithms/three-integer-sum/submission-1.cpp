class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        

        // okay whaat we have to do is that we have to perform question

        // first we run a loop 
        sort(nums.begin() , nums.end());
        int n = nums.size();
        vector<vector<int>> result;
        for(int i = 0 ; i < n-2 ; i++){

            if( i > 0 && nums[i-1] == nums[i]) continue;

            int first = nums[i];

            // now i have to use two pointer 

            int start = i+1;
            int end = n-1;


            while(start < end){
                int t = first + nums[start]+nums[end];
                
                if(t == 0){
                  
                result.push_back({first , nums[start] , nums[end]});
                    // now we haveto check for duplicates

                    while(start < end && nums[start]==nums[start+1])start++;
                    while(start < end && nums[end]==nums[end-1]) end--;

                    start++;
                    end--;
                }else if(t > 0){
                    end--;
                }else{
                    start++;
                }
                
            }
        }
        return result;
    }
};
