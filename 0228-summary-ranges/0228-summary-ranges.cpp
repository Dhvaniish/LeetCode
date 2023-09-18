class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        if(n==0)
            return result;
        int curr = nums[0];
        for(int i = 0; i < n; ++i){
            if(i == n-1 || nums[i]+1 != nums[i+1]){
                if(nums[i] != curr){
                    result.push_back(to_string(curr) + "->" + to_string(nums[i]));
                }
                else{
                    result.push_back(to_string(curr));
                } 
                if(i != n-1){
                    curr = nums[i+1];   
                }
            }
        }
        return result;
    }
};