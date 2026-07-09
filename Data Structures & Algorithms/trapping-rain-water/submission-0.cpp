class Solution {
public:
    int trap(vector<int>& height) {
        

        int n = height.size();

        // we have to make two vector leftmax and the rightmax

        vector<int>leftmax(n,0);
        vector<int>rightmax(n,0);


        // first we will caculate the left max

        leftmax[0] = height[0];

        for(int i = 1 ; i<n;i++){
            leftmax[i] = max(leftmax[i-1] , height[i]);
        }

        // we got the leftmax

        rightmax[n-1] = height[n-1];

        for(int i = n-2 ; i>= 0 ; i--){
            rightmax[i] = max(height[i] , rightmax[i+1]);
        }

        // now we got both the left max and the right max

        int count = 0;

        for(int i = 0; i<n;i++){

            count += min(leftmax[i],rightmax[i]) - height[i];

        }
        return count;
    }
};
