class Solution {
public:
    int find(vector<int>& nums,int low,int high){
        int mid=(low+high)/2;
        if(low==high){
            return low;
        }
        if(mid%2==0 && nums[mid]==nums[mid+1]){
            return find(nums,mid+1,high);
        }
        else if(mid%2==0 && nums[mid]!=nums[mid+1]){
            return find(nums,low,mid);
        }
        else if(mid%2!=0 && nums[mid]==nums[mid-1]){
            return find(nums,mid+1,high);
        }
        return find(nums,low,mid);
    }
    int singleNonDuplicate(vector<int>& nums) {
        
        if(nums.size()==1){
            return nums[0];
        }
        int index=find(nums,0,nums.size()-1);
        return nums[index];
    }
};