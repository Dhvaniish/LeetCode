class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int current =0, total_gas=0, total_cost=0, start=0, i=0;
        for(i=0; i<gas.size(); i++){
            total_gas+=gas[i];
        }
        for(i=0; i<cost.size(); i++){
            total_cost+=cost[i];
        }
        if(total_gas<total_cost){
            return -1;
        }
        for(i=0; i<gas.size(); i++){
            current+=gas[i]-cost[i];
            if(current<0){
                start=i+1;
                current=0;
            }
        }
        return start;
    }
};