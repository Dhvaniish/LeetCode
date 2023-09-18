class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start=0;
        int end = n-1;
        int mid = start + (end-start)/2;
        vector<int> ans(2,-1);
        while(start<=end){
            if(nums[mid]==target){
                ans[0]=mid;
                end=mid-1;
            }
            else if( nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
           mid = start + (end-start)/2; 
        }

        start=0;
        end = n-1;
        mid = start + (end-start)/2;

        while(start<=end){
            if(nums[mid]==target){
                 ans[1] =mid;
                start = mid+1;
            }
            else if( nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
           mid = start + (end-start)/2; 
        }
        return ans;
    }
};