class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10] = {};

        for (int d : digits)
            freq[d]++;

        int ans = 0;

        for (int i = 1; i <= 9; i++) {       // first digit
            if (freq[i] == 0) continue;

            freq[i]--;

            for (int j = 0; j <= 9; j++) {   // second digit
                if (freq[j] == 0) continue;

                freq[j]--;

                for (int k = 0; k <= 8; k += 2) { // last digit
                    if (freq[k] > 0)
                        ans++;
                }

                freq[j]++;
            }

            freq[i]++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna