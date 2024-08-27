/*class Solution {
public:

void solve(int node, vector<double>& succProb, vector<vector<pair<int,double>>> adj, vector<double>& probability){
    //Creating a priority queue:
    priority_queue<pair<double, int>> pq;
    pq.push({1, node});
    probability[node] = 1;

    //Applying dijkstra's algo:
    while(!pq.empty()){
        int node = pq.top().second;
        double prob = pq.top().first;

        pq.pop();

        //Getting the neighbours:
        for(auto it: adj[node]){
          int nnode = it.first;
          double pr = it.second;

            if(pr*prob > probability[nnode]){
                pr = pr*prob;
                probability[nnode] = pr;
                pq.push({pr, nnode});
            }
        }
    }
}

    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        int rows = edges.size();

        //Creating adjacency list:
        vector<vector<pair<int,double>>> adj(n);

        for(int i = 0; i < edges.size(); i++){
            adj[edges[i][0]].push_back({edges[i][1] , succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0] , succProb[i]});
        }

        //Creating a probability array:
        vector<double> probability(n, 0.0);

        solve(start_node, succProb, adj, probability);

        double ans = probability[end_node];

        return ans;
    }
};*/