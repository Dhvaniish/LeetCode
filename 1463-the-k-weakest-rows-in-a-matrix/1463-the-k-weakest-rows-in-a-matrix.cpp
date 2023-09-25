class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        vector<pair<int, int>> count;
        vector<int> ans;
        int sum=0;
        for (int i = 0; i < mat.size(); ++i) {
            for (int j = 0; j < mat[0].size(); ++j) {
                if(mat[i][j] == 1)
                    sum++;
            }
            count.push_back({sum, i});
            sum = 0;
        }
        sort(count.begin(), count.end());
        for(int x=0; x<k; x++){
            ans.push_back(count[x].second);
        }
        return ans;
    }
};