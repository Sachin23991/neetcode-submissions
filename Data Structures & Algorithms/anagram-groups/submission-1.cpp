class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        

        vector<vector<string>>ans;


        // what we are going to do we will make a map according to that we will push a vector string

        unordered_map<string , vector<string>> res;

        for(auto &i : strs){

            string key  = i;
            sort(key.begin() , key.end());
            res[key].push_back(i);
        }

        for(auto i : res){
            ans.push_back(i.second);
        }
        return ans;
    }
};