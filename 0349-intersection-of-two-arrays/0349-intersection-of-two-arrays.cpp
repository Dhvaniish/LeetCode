class Solution {
public:
    bool contains(vector<int> v, int num){
        for(int i=0; i<v.size(); i++){
            if(v[i] == num){
                return true;
            }
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int n;
        
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    if(!contains(v, nums1[i]))
                        v.push_back(nums1[i]);
                }
            }
        }
        return v;
    }
};;