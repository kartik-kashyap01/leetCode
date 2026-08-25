class Solution {
public:
    set<int> s;
    int c=0;
    int missingMultiple(vector<int>& nums, int k) {
        for(int i : nums){
            s.insert(i);
        }

        for(int i=0; i<= nums.size();i++){
            
            if(s.count(i*k)==0 && i!=0){
                return i*k;
            }
            if(s.count(i*k)!=0){
                c++;
            }
        };
        return (c+1)*k ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna