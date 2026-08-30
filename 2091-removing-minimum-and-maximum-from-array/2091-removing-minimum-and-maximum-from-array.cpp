class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n= nums.size();
        

        int maxIndex = max_element(nums.begin(), nums.end()) - nums.begin();
        int minIndex = min_element(nums.begin(), nums.end()) - nums.begin();

        int left = max(maxIndex, minIndex) + 1;
        int right = n - min(maxIndex, minIndex);
        int both = (min(maxIndex, minIndex) + 1)
                 + (n - max(maxIndex, minIndex));

        return min({left, right, both});
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna