/* Level order traversal of a tree is breadth-first traversal for the tree.

Example Tree

Level order traversal of the above tree is 1 2 3 4 5

 

Input:
The task is to complete the method which takes one argument, root of Binary Tree. The struct Node has a data part which stores the data, pointer to left child and pointer to the right child.
There are multiple test cases. For each test case, this method will be called individually.

Output:
The function should print the level order traversal of the tree as specified in the problem statement.

Constraints:
1 <=T<= 20
1 <= Number of edges<= 1000
1 <= Data of a node<= 100

Example:
Input:
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R

Output:
1 3 2
10 20 30 40 60
  */
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* A binary tree Node
struct Node
{
    int data;
    Node* left, * right;
}; */
//You are required to complete this method
void BFS(Node* node,map<int,vector<int>> &m,int level){
    if(node==NULL){
        return;
    }
    else{
        m[level].push_back(node->data);
        BFS(node->left,m,level+1);
        BFS(node->right,m,level+1);
        return;
    }
}
void levelOrder(Node* node)
{  map<int,vector<int>> m;
    BFS(node,m,0);
    /* Print the levels */
    for(auto it=m.begin();it!=m.end();it++){
        vector<int> temp=it->second;
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
    }
    return;
  //Your code here
}
