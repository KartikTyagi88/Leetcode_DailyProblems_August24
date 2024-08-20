/*class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int ans = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){

                if(i+2 < n && j + 2 < m){

                   set<int> st;

                     int rowSum = 0;

                for(int r = i; r < i+3; r++){
                    int sum = 0;
                    for(int c = j; c < j+3; c++){
                     if(grid[r][c] <= 9 && grid[r][c] >= 1) sum += grid[r][c]; 
                     else continue;
                      st.insert(grid[r][c]);
                    }
                    if(rowSum != 0 && sum != rowSum) continue;
                   else if(rowSum == 0) rowSum = sum;
                }
                if(st.size() != 9) continue;
                else st.clear();

                int colSum = 0;

                for(int c = j; c < j+3; c++){
                    int sum = 0;
                    for(int r = i; r < i+3; r++){
                      if(grid[r][c] <= 9 && grid[r][c] >= 1) sum += grid[r][c];
                      else continue;
                       st.insert(grid[r][c]);
                    }
                    if(colSum != 0 && sum != colSum) continue;
                   else if(colSum == 0) colSum = sum;
                }
                if(st.size() != 9) continue;
                else st.clear();

                int sum1 = grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2];
                int sum2 = grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j];

                if(sum1 != sum2) continue;

                if(sum1 == rowSum && sum1== colSum) ans++;

                } 
            }
        }
        return ans;   
    }
};*/