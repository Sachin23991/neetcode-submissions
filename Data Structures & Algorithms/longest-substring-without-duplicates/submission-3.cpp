class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        int left = 0;
        int ml = 0;
        unordered_map<char , int>mp;


        for(int right = 0 ; right < n ; right++){
            
            if(mp.find(s[right]) != mp.end()  && mp[s[right]] >= left){
                left = mp[s[right]]+1;
            }
            mp[s[right]] = right;

            ml = max(ml , right - left + 1);
        }

        return ml;
    }
};
