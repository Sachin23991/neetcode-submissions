class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // Idea:
        // For each index i:
        // result[i] = (product of elements before i) * (product of elements after i)

        int n = nums.size();

        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);

        // ---------------- PREFIX ----------------
        // prefix[i] stores product of elements BEFORE index i

        // Example: nums = [1, 2, 3, 4]

        // prefix[0] = 1 (no element before index 0)

        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }

        /*
        Dry Run (prefix):

        i = 1 → prefix[1] = prefix[0] * nums[0] = 1 * 1 = 1
        i = 2 → prefix[2] = prefix[1] * nums[1] = 1 * 2 = 2
        i = 3 → prefix[3] = prefix[2] * nums[2] = 2 * 3 = 6

        Final prefix = [1, 1, 2, 6]

        Meaning:
        index 0 → no left → 1
        index 1 → [1] → 1
        index 2 → [1,2] → 2
        index 3 → [1,2,3] → 6
        */

        // ---------------- SUFFIX ----------------
        // suffix[i] stores product of elements AFTER index i

        // suffix[n-1] = 1 (no element after last index)

        for(int i = n-2; i >= 0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        /*
        Dry Run (suffix):

        i = 2 → suffix[2] = suffix[3] * nums[3] = 1 * 4 = 4
        i = 1 → suffix[1] = suffix[2] * nums[2] = 4 * 3 = 12
        i = 0 → suffix[0] = suffix[1] * nums[1] = 12 * 2 = 24

        Final suffix = [24, 12, 4, 1]

        Meaning:
        index 0 → [2,3,4] → 24
        index 1 → [3,4] → 12
        index 2 → [4] → 4
        index 3 → no right → 1
        */

        // ---------------- RESULT ----------------
        vector<int> result(n, 0);

        for(int i = 0; i < n; i++){
            result[i] = prefix[i] * suffix[i];
        }

      

        return result;
    }
};