class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        

        // what we are going to do we will do like this 

        unordered_map<int , int> mp;

        // we would take map to record the number along side with their index because in this quetion we have to return the orignal index

        for(int i = 0  ; i< nums.size();i++){

            int rem = target - nums[i];

            if(mp.find(rem) != mp.end()){
                return { mp[rem], i};
            }

            mp[nums[i]] = i;
        }
        return {};
    }
};
