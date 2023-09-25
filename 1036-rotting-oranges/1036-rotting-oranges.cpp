class Solution {
public:

    int bfs(vector<vector<int>> &grid, vector<int> &dr, vector<int> &dc, queue<pair<int, int>> &q){
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();

        while(!q.empty()){
            int size = q.size();
            bool isRotten = false;
            for(int i=0; i<size; i++){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                for(int i=0; i<4; i++){
                    int nr = row + dr[i];
                    int nc = col + dc[i];

                    if(nr>=0 && nc>=0 && nr<n && nc<m && grid[nr][nc] == 1){
                        isRotten = true;
                        grid[nr][nc] = 2;
                        q.push({nr, nc});
                    }
                }
            }
            
            if(isRotten){
                ans++;
            }
        }
        return ans;
    }


    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int, int>> q;
        vector<bool> visited(n, 0);

        vector<int> dr = {0, 0, 1, -1};
        vector<int> dc = {1, -1, 0, 0};

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                }
            }
        }
        int ans = bfs(grid,dr, dc, q);
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == 1){
                    return -1;
                }
            }
        }  
        return ans;
    }
};