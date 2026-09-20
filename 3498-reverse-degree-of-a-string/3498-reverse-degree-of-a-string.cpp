class Solution {
public:
    int reverseDegree(string s) {
        int count=0;

        for(int i =0; i<s.size();i++){
            int j = 26-(s[i]-'a');
            count += (i+1)*j;
        }
        
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna