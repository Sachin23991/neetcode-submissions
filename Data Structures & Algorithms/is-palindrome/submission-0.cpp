class Solution {
public:
    bool isPalindrome(string s) {
        
        string st = "";

        for(auto i : s){
            if(isalnum(i)){
                st += tolower(i);
            }
        }

        int i = 0;
        int e = st.size()-1;

        while(i < e){
            if(st[i] != st[e]){
                return false;
            }
            i++;
            e--;
        }

        return true;
    }
};
