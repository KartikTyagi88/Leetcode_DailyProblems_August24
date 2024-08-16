/*class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        unordered_map<int,int> mp;

      //Storing the frequency in the map:
        for(int i =0; i < n; i++){
          mp[word[i]]++;
        }
     
       int dist = mp.size();

        //MIN heap:
        priority_queue<int, vector<int>, greater<int>> pq;

        for(auto it: mp){
            int freq = it.second;
            pq.push(freq);
        }
       
       int ans = 0;
       while(dist != 0){
         if(dist > 8 && dist <= 16){
            int t = pq.top();
              pq.pop();
              ans += 2*t;

        }
        else if(dist > 16 && dist <= 24){
            int t = pq.top();
            pq.pop();
            ans += 3*t;
        }
        else if(dist > 24){
            int t = pq.top();
            pq.pop();
            ans += 4*t;
        }
        else{
            int t = pq.top();
            pq.pop();
            ans += t;
        }
        dist--;
       }
       return ans;
    }
};*/