/*class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;

        int n = arr.size();
        //Calculating the frequncy of all the strings:
        for(int i = 0; i < n; i++){
            mp[arr[i]]++;
        }

    // To maintain the order of strings in the array we traverse in the array and not in the map. 
      for(int i = 0; i < n ; i++){
        if(mp[arr[i]] == 1){
            k--;
        }
        if(k == 0) return arr[i];
      }

        return "";
    }
};*/