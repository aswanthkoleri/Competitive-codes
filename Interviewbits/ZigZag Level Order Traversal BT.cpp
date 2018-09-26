/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 std::vector<vector<int> result;
 void solve(TreeNode* A,int level){
 	if(A==NULL){
 		return;
 	}
 	result[level].push_back(A->val);
 	if(level%2==0){
 		solve(A->right,level++);
 		solve(A->left,level++);
 	}else{
 		solve(A->left,level++);
 		solve(A->right,level++);
 	}
 	return ;
 }
vector<vector<int>> Solution::zigzagLevelOrder(TreeNode* A) {
   	solve(A,0);
   	return result;
}
