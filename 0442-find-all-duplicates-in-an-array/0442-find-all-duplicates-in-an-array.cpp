class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int size= nums.size();
        int i=0;
        while (i<size){
            int count=1;
            for(int j=i+1;j<size;j++){
                if(nums[i]==nums[j]){
                    count++;
                    break;
                }
                break;
            }
            if(count==2){
                ans.push_back(nums[i]);

            }      
            i++;
        }
        return ans;
    }
};