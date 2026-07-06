class Solution {
public:

    string encode(vector<string>& strs) {
        string str = "";

        for(auto i : strs){
            str = str+i+"-";
        }

        return str;
    }

    vector<string> decode(string s) {

        vector<string> ans;

        string str = "";

        int n = s.size();

        int i = 0;

        while( i < n){

            if(s[i] == '-'){
                ans.push_back(str);
                str = "";
               
            }else{
                
                 str += s[i];
               
            }
            i++;
        }

        
        return ans;

        
    }
};
