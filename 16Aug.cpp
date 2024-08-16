/*class Solution {
public:

int solve2(vector<vector<int>>& arrays){
    int n = arrays.size();
    int pointer = -1;

    int mini = INT_MAX;
    int i = 0;

    while(i < n){
        int m = arrays[i].size();

        if(arrays[i][0] < mini){
            pointer = i;
            mini = arrays[i][0];
        }
        i++;
    }

    int maxi = INT_MIN;
    int j = 0;
    while(j < n){
        int m = arrays[j].size();

        if(j != pointer) maxi = max(maxi, arrays[j][m-1]);
        j++;
    }

    return abs(maxi-mini);
}

int solve1(vector<vector<int>>& arrays){
    int n = arrays.size();
        int pointer = -1;
      
      int maxi = INT_MIN;
        int i = 0;
        while(i < n){
            int m = arrays[i].size();
           if(arrays[i][m-1] > maxi){
            maxi = arrays[i][m-1];
              pointer = i;
           }
            i++;
        }

      int mini = INT_MAX;
      int j = 0;
      while(j < n){
        int m = arrays[j].size();
        if(j != pointer) mini = min(mini, arrays[j][0]);
        j++;
      }

      return abs(maxi-mini);
}

    int maxDistance(vector<vector<int>>& arrays) {
        return max(solve1(arrays) , solve2(arrays));
    }
};*/