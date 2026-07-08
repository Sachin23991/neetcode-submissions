class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        // as i have to make the sequence means that can be non contiguous
        // as it is concecutive okay

        // first sort
        int n = nums.size();
        
        if(n == 0) return 0;
        else if(n == 1)return 1;
        else{
       map<int, int> mp;
       for(auto i : nums){
        mp[i]++;
       }
       vector<int>st;
       for(auto it : mp){
        st.push_back(it.first);
       }
       
        // the only thing is left that to count the number 

       // i can do this thing that i can take two pointer and if 
int ans = 1;
int curr = 1;

for (int i = 1; i < st.size(); i++) {

    if (st[i] == st[i-1] + 1) {
        curr++;
    }
    else {
        curr = 1;
    }

    ans = max(ans, curr);
}

return ans;
        }
        return -1;

    }
};
