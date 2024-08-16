// class Solution {
// public:
//     bool canBeEqual(vector<int>& target, vector<int>& arr) {
//         int n = target.size();

//         sort(target.begin() , target.end());
//         sort(arr.begin(), arr.end());

//         int i = 0;
//         bool ans = false;
        
//         while(i < n){
//             if(target[i] != arr[i]) return ans;
//             i++;
//         }
         
//          ans = true;
//         return ans;  
//     }
// };