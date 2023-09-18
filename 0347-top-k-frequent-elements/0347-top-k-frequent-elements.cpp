class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>v1;
        for(auto i:m){
            pair<int,int>p;
            p.first = i.second;
            p.second = i.first;
            v1.push_back(p);
        }
        sort(v1.begin(),v1.end());
        reverse(v1.begin(), v1.end());
        for(auto i: v1){
            ans.push_back(i.second);
            k--;
            if(k==0){
                break;
            }
        }
        return ans;
    }
};