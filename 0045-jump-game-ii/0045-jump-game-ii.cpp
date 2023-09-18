class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()<2)
            return 0;
        int jumps=0, currmax=0,nextmax=0;
        for(int i=0;i<nums.size()-1;i++){
            nextmax=max(nextmax,nums[i]+i);
            if(i==currmax){
                currmax=nextmax;
                jumps++;
                if(currmax>= nums.size()-1)
                    break;
            }
        }
        return jumps;
    }
};