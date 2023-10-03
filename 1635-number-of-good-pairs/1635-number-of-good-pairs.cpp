class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> ans;
        ans.push_back({1,1});
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] == nums[j])
                    ans.push_back({i, j});
            }
        }
        return ans.size()-1;
    }
};