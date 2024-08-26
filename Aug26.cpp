/*
// Definition for a Node.
// class Node {
// public:
//     int val;
//     vector<Node*> children;

//     Node() {}

//     Node(int _val) {
//         val = _val;
//     }

//     Node(int _val, vector<Node*> _children) {
//         val = _val;
//         children = _children;
//     }
// };


class Solution {
public:

void solve(Node* root, vector<int>& ans){
    //Base case:
    if(root == NULL) return;

    //Visiting all the children:
    for(Node* child: root->children){
        solve(child, ans);
    }
  
    ans.push_back(root->val);
}

    vector<int> postorder(Node* root) {
        vector<int> ans;

        solve(root, ans);

        return ans; 
    }
};*/