/*class Solution {
public:

int solve(int curr, int paste, int n, vector<vector<int>>& dp){
    //Base case:
    if(curr == n){
        return 0;
    }
    if(curr*2 > n && curr + paste > n){
        return 1e8;
    }

    if(dp[curr][paste] != -1) return dp[curr][paste];

    //Explore all paths:

    //Doing copy + paste:
    int cp = 1e8;
    if(2*curr <= n){
        cp = 2 + solve(2*curr, curr, n,dp);
    }

    //Doing the previously copied paste:
    int p = 1e8;
    if(paste != 0 && curr + paste <= n){
        p = 1 + solve(curr + paste, paste, n,dp);
    }

    //Returning the minimum :
    return dp[curr][paste] = min(cp,p);
}

    int minSteps(int n) {

        if(n == 1) return 0;

        //Creating a dp array:
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));

       int ans = solve(1,0,n,dp);

       return ans; 
    }
};*/