

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

void util(Node *root, map<int,vector<int>> &m, int diag){
    stack<pair<Node *, int>> q;//node, diag
    q.push({root,0});
    while(!q.empty()){
        auto it=q.top();
        q.pop();
        m[it.second].push_back(it.first->data);
        if(it.first->right)
        q.push({it.first->right,it.second});
        if(it.first->left)
        q.push({it.first->left,it.second+1});
        
    }
    return;
}


vector<int> diagonal(Node *root)
{
   // your code here
   vector<int> ans;
   if(!root) return ans;
   map<int,vector<int>> m;
   util(root,m,0);
   for(auto it:m){
       for(auto x:it.second)
       ans.push_back(x);
   }
   
   return ans;
}
