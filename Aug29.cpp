/*class disjointset{
   vector<int> rank,parent;

public:
//Constructor:
disjointset(int n){
    rank.resize(n+1, 0);
    parent.resize(n+1);

    for(int i = 0; i <=n; i++){
        parent[i] = i;
    }
}

int findUpar(int node){
    if(node == parent[node]) return node;

    return parent[node] = findUpar(parent[node]);
}

void unionByRank(int u,int v){
    int pu = findUpar(u);
    int pv = findUpar(v);

    if(pu == pv) return;  //Both belongs to the same component

    if(rank[pu] < rank[pv]){
        parent[pu] = pv;
    }
    else if(rank[pv] < rank[pu]){
        parent[pv] = pu;
    }
    else{
        parent[pv] = pu;
        rank[pu]++;
    }
}

};

class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        //Finding the dimension of the grid:
        int maxRow = 0;
        int maxCol = 0;

        for(auto it: stones){
            maxRow = max(maxRow,it[0]);  // it[0] contains the row where stone is present, so this is how we can get maximum row where stone is present;
            maxCol = max(maxCol,it[1]);
        }
      
      //Total number of nodes will be maxRow + maxCol & a 1 for safety
        disjointset ds(maxRow + maxCol + 1);
        unordered_map<int,int> stoneNodes;
        for(auto it: stones){
         int stoneRow = it[0];
         int stoneCol = it[1] + maxRow+1;

         ds.unionByRank(stoneRow,stoneCol);
         //We have stored the stoneRow and stoneCol in map so that we can count the number of disjoint sets
         stoneNodes[stoneRow] = 1;
         stoneNodes[stoneCol] = 1;
       }

       int cnt = 0;
       for(auto it: stoneNodes){
        if(ds.findUpar(it.first) == it.first) cnt++;
       }

       int n = stones.size(); //No.of stones;

       return n-cnt;
        
    }
};*/