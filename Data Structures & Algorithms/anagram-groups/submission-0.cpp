class Solution {
public:
    bool isequal( string s , string t){
        sort(s.begin(),s.end());
        sort(t.begin() , t.end());

        if(s==t) return true;

        return false;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        set<vector<string>> ans;

        vector<vector<string>>fin;
        int n = strs.size();
        for(int i = 0 ;i < n ; i++){
            
            vector<string>res;
            for(int j = 0 ; j<n ; j++){

                if(isequal(strs[i] , strs[j])){
                    res.push_back(strs[j]);
                }
            }
            ans.insert(res);
        }
        for(auto i : ans){
            fin.push_back(i);
        }
        return fin;
    }
};
