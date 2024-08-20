/*class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int mod = 1e9 + 7;
        vector<int> v;

        for(int i = 0; i < nums.size(); i++){
            int prefSum = 0;
            for(int j = i; j < nums.size(); j++){
                prefSum += nums[j];
                v.push_back(prefSum);
            }
        }

        sort(v.begin(), v.end());
        int ans = 0;

        for(int i = left-1; i <= right-1; i++){
            ans = (ans + v[i])%mod;
        }
        return ans%mod;
    }
};*/