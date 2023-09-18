class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max = INT_MIN;
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>max){
                ans = i;
                max = nums[i];
            }
        }
        return ans;
    }
};