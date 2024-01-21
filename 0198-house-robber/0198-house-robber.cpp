class Solution {
public:
    //Method 3: Tabulation with Space Optimization
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0];   // Initialize the maximum sum ending at the previous element
        int prev2 = 0;       // Initialize the maximum sum ending two elements ago
        
        for (int i = 1; i < n; i++) {
            int pick = nums[i];  // Maximum sum if we pick the current element
            if (i > 1)
                pick += prev2;  // Add the maximum sum two elements ago
            
            int nonPick = 0 + prev;  // Maximum sum if we don't pick the current element
            
            int cur_i = max(pick, nonPick);  // Maximum sum ending at the current element
            prev2 = prev;   // Update the maximum sum two elements ago
            prev = cur_i;
        }
        return prev;
    } 
};