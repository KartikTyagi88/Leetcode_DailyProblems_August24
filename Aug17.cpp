/*class Solution {
public:

// This is a question of dynamic programming as we have to try all paths, but as the
// constraints are high we have to optimize the decision making in the dynamic programming

    long long maxPoints(vector<vector<int>>& points) {

        int n = points.size(); //No.of rows
        int m = points[0].size(); //No.of cols

        vector<long long> prevRow(m);  //Initialising the previous row

        for(int i = 0; i < m; i++){
            prevRow[i] = points[0][i];
        }

        //Iteratively finding the maximum possible points for each cell in every row:
        for(int row = 1; row < n; row++){
            vector<long long> currRow(m);  // This is the current row vector.
            vector<long long> leftMax(m); //This calculates the maximum possible points from the left of a given cell.
            vector<long long> rightMax(m);  //This calculates the maximum possible points from the right of a given cell.

            //Maximum possible values from the left:
            leftMax[0] = prevRow[0];
            for(int i = 1; i < m; i++){
                leftMax[i] = max(prevRow[i], leftMax[i-1] -1);
            }

            //Maximum possible values from the right:
            rightMax[m-1] = prevRow[m-1];
            for(int i = m-2; i >= 0; i--){
                rightMax[i] = max(prevRow[i] , rightMax[i+1] - 1);
            }

            //Finding the maximum possible points achievable for every cell:
            for(int i = 0; i < m; i++){
                currRow[i] = points[row][i] + max(leftMax[i] , rightMax[i]);
            }

            //Updating the value of previous row
            prevRow = currRow;
        }

     long long ans = INT_MIN;

     for(int i = 0; i < m; i++){
        ans = max(ans , prevRow[i]);
     }

     return ans;
    }
};*/