class Solution {
public:
    void dfs(vector<vector<int>> &graph, vector<bool> &visited, int i){
        stack<int> s;
        s.push(i);
        visited[i] = true;

        while(!s.empty()){
            int temp = s.top();
            s.pop();
                for(int j=0; j<graph[0].size(); j++){
                    if(graph[temp][j] == 1 && !visited[j]){
                        dfs(graph, visited, j);
                    }
                }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, 0);
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(!visited[i]){
                cnt++;
                dfs(isConnected, visited, i);
            }
        }
        return cnt;
    }
};