class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        long long totalGas = 0;
        long long currentGas = 0;
        int start = 0;

        for (int i = 0; i < gas.size(); i++) {
            long long diff = gas[i] - cost[i];

            totalGas += diff;
            currentGas += diff;

            if (currentGas < 0) {
                start = i + 1;
                currentGas = 0;
            }
        }

        return totalGas >= 0 ? start : -1;
    }
};