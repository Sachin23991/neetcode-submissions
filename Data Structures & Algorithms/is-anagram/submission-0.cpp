class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char , int> mp1;
        unordered_map<char , int>mp2;
        int l1 = s.size();
        int l2 = t.size();

        if(l1 != l2) return false;

        for(auto i : s){
            mp1[i]++; // we are done with first string
        }

        for(auto i : t){
            mp2[i]++;
        }

        for(auto i : t){

            if(mp2[i] != mp1[i]) return false;
        }
       

       return true;
    }
};
