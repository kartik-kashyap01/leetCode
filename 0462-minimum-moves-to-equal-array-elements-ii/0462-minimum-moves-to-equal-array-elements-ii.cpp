class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans =0;
       sort(nums.begin(), nums.end());

        int avg = nums[nums.size() / 2];

        for(int i =0 ; i<nums.size() ;i++){
            if(avg >= nums[i]  ){
                ans = ans + ( avg - nums[i]);
            }
            else{
                 ans = ans + (  nums[i] - avg);
            }
        }
        return ans ;


    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna