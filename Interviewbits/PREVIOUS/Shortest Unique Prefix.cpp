/*Structure of trie tree*/
struct trieNode {
    struct trieNode *child[26];
    bool isEnd;
    int count;
}

struct trieNode *getNode(){
	struct trieNode *root=new struct trieNode;
	root->isEnd=false;
	root->count=0;
	for(int i=0;i<26;i++){
		root->child[i]=NULL;
	} 
	return root;
}
void insert(struct trieNode *node,string s){
    struct trieNode *p=node;
    for(int i=0;i<s.size();i++){
        int index=s[i]-'a';
        if(p->child[index]==NULL){
            p->child[index]=getNode();
            p->count++;
        }
        p=p->child[index];
    }
    p->isEnd=true;
}
string findPrefix(struct trieNode *node,string s){
	/*Traverse till the end of the string and mark the last junction in the trie tree */
	struct trieNode *p=node;
	int res=-1;
	for(int i=0;i<s.size();i++){
		int index=s[i]-'a';
		if(p->child[index]->count > 1){
			res=index;
		}
		p=p->child[index];
	}
	/* Now find the prefix of the string */
	string prefix="";
	for(int i=0;i<=res+1;i++){
		prefix+=s[i];
	}
	return prefix;
}
vector<string> Solution::prefix(vector<string> &A) {
		struct trieNode* root=getNode();
		for(int i=0;i<A.size();i++){
			insert(root,A[i]);
		}
		std::vector<string> result;
		for(int i=0;i<A.size();i++){
			result.push_back(findPrefix(root,A[i]));
		}
		return result;
}
