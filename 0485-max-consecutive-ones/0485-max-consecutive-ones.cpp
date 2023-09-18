class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,i=0,ans=0;
        while(i<nums.size()){
            if(nums[i]==1){
                cnt++;
                ans=max(cnt,ans);
            }
            else{
                cnt=0;
            }
            i++;
        }
        return ans;
    }
};