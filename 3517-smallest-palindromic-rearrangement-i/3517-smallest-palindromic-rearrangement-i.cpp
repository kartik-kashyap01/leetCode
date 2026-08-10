class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);

        for (char ch : s) {
            freq[ch - 'a']++;
        }

        string left = "";
        string mid = "";

        for (int i = 0; i < 26; i++) {
            left.append(freq[i] / 2, char(i + 'a'));

            if (freq[i] % 2 == 1) {
                mid = char(i + 'a');
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna