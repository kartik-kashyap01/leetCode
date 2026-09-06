class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long k=1;
        while(n>=k){
            if(n==k){
                return true;
            }
            k=k*2;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna