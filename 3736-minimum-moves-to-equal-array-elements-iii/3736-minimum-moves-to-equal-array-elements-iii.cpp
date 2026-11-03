class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans =0 ;
        sort(nums.begin(),nums.end());
      int end =  nums[nums.size()-1];
        for(int i : nums ){
            ans = ans + ( end -i );
        }
        return ans ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna