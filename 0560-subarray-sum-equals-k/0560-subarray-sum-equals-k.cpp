class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0, count=0;
        map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            if(sum == k){
            count++;
            }
            if(mp.find(sum-k) != mp.end()){
                count += mp[sum-k];
            }
            if(mp.find(sum) != mp.end()){
                mp[sum]++;
            }
            else{
                mp[sum] = 1;
            }
        }
        return count;
    }
};