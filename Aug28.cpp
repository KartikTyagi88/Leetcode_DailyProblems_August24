/*class Solution {
public:

void solve(int row, int col, vector<vector<int>>& vis, vector<vector<int>>& grid1, vector<vector<int>>& grid2, bool& isSubIsland){
    vis[row][col] = 1;
    int n = grid2.size();
    int m = grid2[0].size();

    if(grid1[row][col] == 0) isSubIsland = false;

    int drow[] = {+1,0,-1,0};
    int dcol[] = {0,-1,0,+1};

    for(int i = 0; i < 4; i++){
        int nrow = row + drow[i];
        int ncol = col + dcol[i];

        if(nrow < n&& nrow >=0 && ncol < m && ncol >= 0 && !vis[nrow][ncol]){
            if(grid2[nrow][ncol] == 1){
                solve(nrow, ncol, vis,grid1, grid2, isSubIsland);
            }
        }
    }
}

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n = grid2.size();
        int m = grid2[0].size();

        //Creating a visited matrix:
        vector<vector<int>> vis(n, vector<int>(m, 0));

        int ans = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j] && grid2[i][j] == 1){
                     bool isSubIsland = true;
                    solve(i,j,vis, grid1, grid2, isSubIsland);
                     if(isSubIsland == true) ans++;
                }
            }
        }
        return ans;
    }
};*/