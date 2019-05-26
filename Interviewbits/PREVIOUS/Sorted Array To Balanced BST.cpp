/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* solve(std::vector<int> A,int start,int end){
	if(start<end){
		return NULL;
	}
	int mid=(start+end)/2;
	TreeNode*  A=new TreeNode(A[mid]);
	A->left=solve(A,start,mid-1);
	A->right=solve(A,end,mid+1);
	return A;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    TreeNode *A=solve(A,0,A.size());
    return A;
}
