class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // for that first we have to use unordered map
       
       unordered_map<int  , int> mp;
       for(auto i : nums){
        mp[i]++;
       }

       // now what we have to find the thing we have to find is 
       vector<vector<int>>bucket(nums.size()+1);

       for(auto i : mp){

            bucket[i.second].push_back(i.first);

       }

       vector<int>ans;

       for(int i = nums.size() ; i>= 1 ; i--){

        for(auto v : bucket[i]){
            ans.push_back(v);

            if(ans.size() == k) return ans;
        }
       }
       return {};
    }
};