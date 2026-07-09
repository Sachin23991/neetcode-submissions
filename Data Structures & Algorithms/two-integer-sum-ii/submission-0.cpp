class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        

        int s = 0;
        int e = numbers.size()-1;

        while(s < e){

            int t = numbers[s]+numbers[e];

            if(t == target){

                return {s+1 , e+1};
            }
            else if( t>target){
                e--;
            }else{
                s++;
            }
        }

        return {};
    }
};
