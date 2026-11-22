class Solution {
public:
    bool checkString(string s) {
        int l = s.size();
        for( int i = 0 ; i<l ; i++){
            if(s[i] == 'b'){
                for(int j = i ; j<l ; j++){
                    if(s[j]=='a'){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna