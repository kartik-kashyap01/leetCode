class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas=0;
        int totalCost=0;
        int start= 0;
        int current =0;
        for(int i=0; gas.size()>i;i++){
            totalGas+= gas[i];
            totalCost+= cost[i];
            current+= +(gas[i]-cost[i]);
            if(current <0){
                current=0;
                start=i+1;
                
            }

        }

        return totalCost > totalGas ? -1: start;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna