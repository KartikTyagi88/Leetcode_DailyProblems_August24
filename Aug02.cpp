// class Solution {
// public:
//     int minSwaps(vector<int>& nums) {
//         int n = nums.size();

//         //Counting the total number of 1's in the array:
//         int count = 0;
//        vector<int> arr(2*n, 0);
//        for(int i = 0; i < 2*n; i++){
//            arr[i] = nums[i%n];
//        }

//        for(int i = 0; i < n; i++){
//         if(nums[i] == 1) count++;
//        }

//        //EDGE CASES:
//        if(count == 0 || count == n) return 0;
        
//         // //Now we have to group together all these 1's so we will check in a subarray of size
//         // count that how many swaps are required to make all 1, and that will be total number of 0's
//         // in the subarray..

//         int count0 = 0;

//        for(int i = 0; i < count; i++){
//         if(arr[i] == 0) count0++;
//        }

//         int ans = count0;
//         for(int i = 1; i < n; i++){
//             if(arr[i-1] == 0) count0--;
//             if(arr[(i+count-1)%n] == 0) count0++;

//             ans = min(ans,count0);
//         }

//         return ans;
//     }
// };