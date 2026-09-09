class Solution {
public:
    long long countCommas(long long n) {
        long long r=0;
        long long s=1000;
        while(s<=n){
            r += (n-s+1);
            s*=1000;
        }
        return r;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna