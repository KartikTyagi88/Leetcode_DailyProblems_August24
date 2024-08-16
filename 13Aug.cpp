/*class Solution {
public:

void solve(int ind, int cs, vector<int>& candidates, vector<int>& list, vector<vector<int>>& ans){
    if(cs == 0){
        ans.push_back(list);
        return;
    }

    for(int i = ind; i < candidates.size(); i++){
        if(i > ind && candidates[i] == candidates[i-1]) continue;
        if(candidates[i] > cs) break;

        //Take case:
        list.push_back(candidates[i]);
        solve(i+1, cs-candidates[i],candidates,list,ans);
        //Not take case:
        list.pop_back();
    }
}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       
       //To get answer in lexicographical order we sort the candidates array.
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> list;

        solve(0, target,candidates,list,ans);

        return ans;
    }
};*/