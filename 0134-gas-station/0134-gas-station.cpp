class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size = gas.size();
        int gasSum = 0, costSum = 0, sum = 0, index = 0;

        for(int i = 0; i < size; i++) {
            gasSum += gas[i];
            costSum += cost[i];
        }

        if(gasSum < costSum) return -1;

        for(int i = 0; i < size; i++) {
            sum += gas[i] - cost[i];
            if(sum < 0) {
                sum = 0;
                index = i+1;
            }
        }
        return index;
    }
};