class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty()) return 0;

        map<int,int> mp;

        for(int x : nums)
            mp[x]++;

        int ans = 1;
        int curr = 1;

        auto it = mp.begin();
        auto prev = it;
        ++it;

        while(it != mp.end()){

            if(it->first == prev->first + 1)
                curr++;
            else
                curr = 1;

            ans = max(ans, curr);

            prev = it;
            ++it;
        }

        return ans;
    }
};