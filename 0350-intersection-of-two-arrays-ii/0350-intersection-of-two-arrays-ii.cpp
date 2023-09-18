class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int, int> mp;

        for(auto it: nums1)
            mp[it]++;
        
        for(auto it: nums2){
            if(mp[it]>0){
                ans.push_back(it);
                mp[it]--;
            }
        }
        return ans;
    }
};  