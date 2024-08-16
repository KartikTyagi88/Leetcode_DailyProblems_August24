/*class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        
        //USING BUCKET SORT:

        //We know the range of values of possible answer:

        // The minimum possible distance is 0(when 2 numbers are identical) 
        // and the Maximum possible distance is the distance between smallest and 
        // largest number.

        //Finding the smallest and the largest number:
        sort(nums.begin(), nums.end());

        int n = nums.size();

        int mini = nums[0];
        int maxi = nums[n-1];
       
       //Finding the maximum distance:
        int maxiDist = maxi - mini;

        //Creating a bucket array to store the distance and their frequencies:

        vector<int> bucketArr(maxiDist + 1, 0);
        // This bucketArr contains indices from 0 to maxiDist which represents our distances

        //Finding all the possible distances and storing their frequencies:
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                int distance = abs(nums[i] - nums[j]);

                bucketArr[distance]++;
            }
        }
        
        //Traversing the bucketArr to find the kth smallest distance:
        int freq = 0;
        int i = 0;
        int ans;
       for(; i < bucketArr.size() && freq < k; i++){
          freq += bucketArr[i];
       }
       ans = i-1; 
       return ans;
    }
};*/