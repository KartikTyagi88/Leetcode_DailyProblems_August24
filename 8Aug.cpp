/*class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int count = 1;
        int total = rows*cols;

        int n = 1;
        vector<vector<int>> ans;
        ans.push_back({rStart, cStart});

        while(count < total){
            //Going East n times:
            for(int i = 0; i < n; i++){
                cStart++;
                if(count < total && rStart >=0 && rStart < rows && cStart >=0 && cStart < cols){
                    ans.push_back({rStart, cStart});
                    count++;
                }
            }

            //Going South n times:
            for(int i = 0; i < n; i++){
                rStart++;
                if(count < total && rStart >=0 && rStart < rows && cStart >=0 && cStart < cols){
                    ans.push_back({rStart,cStart});
                    count++;
                }
            }
            
            //Updating the value of n:
            n++;

            //Going West n times:
            for(int i = 0; i < n; i++){
                cStart--;
                if(count < total && rStart >=0 && rStart < rows && cStart >=0 && cStart < cols){
                    ans.push_back({rStart,cStart});
                    count++;
                }
            }

            //Going North n times:
            for(int i = 0; i < n; i++){
                rStart--;
                if(count < total && rStart >=0 && rStart < rows && cStart >=0 && cStart < cols){
                    ans.push_back({rStart, cStart});
                    count++;
                }
            }
           
        //    Updating the value of n:
            n++;
        } 

        return ans;
    }
};*/