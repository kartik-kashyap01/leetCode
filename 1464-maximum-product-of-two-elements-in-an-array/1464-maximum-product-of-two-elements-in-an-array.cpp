class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1=INT_MIN;
        int max2=INT_MIN;
        for(int i : nums){
            if(max1<=i){
                max2=max1;
                max1=i;

            }
            else if (i > max2) {
                max2 = i;
            }

        }
        return((max1-1)*(max2-1));
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna