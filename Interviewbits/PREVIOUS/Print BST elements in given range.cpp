#include<bits/stdc++.h>
vector<int> v;
void inorder(Node *root){
    if(root==NULL){
        return ;
    }
    inorder(root->left);
    v.push_back(root->data);
    inorder(root->right);
}

void printNearNodes(Node *root, int l, int h)
{
    inorder(root);
    /*for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }*/
    for(int i=0i<n;i++){
        if(v[i]>=l && v[i]<=h){
            cout<<v[i]<<" ";
        }
    }

    v.clear()
    return ans;
}