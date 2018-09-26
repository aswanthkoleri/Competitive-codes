TreeNode* solve(int *parent,int *rchild,int *lchild,std::vector<int> &A,int root){
	if(root==-1){
		return NULL;
	}else{
	TreeNode* Node=new TreeNode(A[root]);
	/*FInd the childrens of root */
	Node->left=solve(parent,rchild,lchild,A,lchild[root]);
	Node->right=solve(parent,rchild,lchild,A,rchild[root]);
	return Node;
	}
}

TreeNode* Solution::buildTree(vector<int> &A) {
    int rchild[A.size()];
    int lchild[A.size()];
    int parent[A.size()];
    for(int i=0;i<A.size();i++){
    	rchild[i]=-1;
    	lchild[i]=-1;
        parent[i]=-1;
    }
    int root=0,last;
    for(int i=1;i<A.size();i++){
    	last=i-1;

        while(A[last]=<A[i] && last!=root ){
            last=parent[last];
        }
        /*If even after the loop ,A[i] is greater then make it the root */
        if(A[i]>=A[last]){
            
            parent[root]=i;
            lchild[i]=root;
            root=i;
        }else if(rchild[last]==-1){
            /*make it the right child of the last*/
            rchild[last]=i;
            parent[i]=last;
        }
        else{
            /*Rearrange*/
            parent[rchild[last]]=i;
            lchild[i]=rchild[last];
            rchild[last]=i;
            parent[i]=last;
        }
        parent[root]=-1;
    }
    TreeNode* Node=solve(parent,rchild,lchild,A,root);
    return Node;
}