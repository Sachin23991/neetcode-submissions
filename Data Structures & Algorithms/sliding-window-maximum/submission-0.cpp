class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> ans;
        multiset<int> ms;

        int left = 0;

        for (int right = 0; right < nums.size(); right++) {

            // Add current element
            ms.insert(nums[right]);

            // If window size becomes greater than k
            if (right - left + 1 > k) {
                ms.erase(ms.find(nums[left])); // Remove only one occurrence
                left++;
            }

            // If window size is exactly k
            if (right - left + 1 == k) {
                ans.push_back(*prev(ms.end())); // Largest element
            }
        }

        return ans;
    }
};