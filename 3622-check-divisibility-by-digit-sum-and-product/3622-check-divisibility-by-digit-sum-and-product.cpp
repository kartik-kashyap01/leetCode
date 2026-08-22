class Solution {
public:
    bool checkDivisibility(int n) {
           int o = n;
        int sum=0;
        int m=1;
        while(n>0){
            int num = n%10;
            sum = sum + num ;
            m = m*num;
            n=n/10;
        }

        if(o%(sum+m)==0){
            return true;
        }
      
        return false;
       
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna