class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0,r=0;
        while(r<nums.size()){
            if(nums[r]==0){
                r++;
            }
            else{
                swap(nums[l],nums[r]);
                r++;
                l++;
            }
        }
    }
};