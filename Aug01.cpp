// class Solution {
// public:
//     int countSeniors(vector<string>& details) {
//         int n = details.size();

//         int ans = 0;

//         for(auto it: details){
//             char a = it[11];
//             char b = it[12];
//             if(a == '6' && b > '0') ans++;
//             else if(a > '6' && b >= '0') ans++;
//         }

//         return ans;
        
//     }
// };