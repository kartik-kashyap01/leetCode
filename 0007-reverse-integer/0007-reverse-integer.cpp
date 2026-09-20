class Solution {
public:
    int reverse(int x) {
        long long ans=0;
       
       while(x!=0){
        int num= x%10;

        ans=ans*10+num;
        if ((ans > INT_MAX ) || (ans < INT_MIN )) {
                return 0; 
            }
        
        x=x/10;
       }
       
       return (int)ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna