class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int start = 0;
        int end = heights.size()-1;

        int ma = 0;

        while(start < end){


            ma = max(ma , min(heights[start] , heights[end])*(end - start));

            if(heights[start] < heights[end]){

                start++;
            }else{
                end--;
            }
        }

        return ma;
    }
};
