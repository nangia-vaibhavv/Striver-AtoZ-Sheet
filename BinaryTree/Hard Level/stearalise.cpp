class Codec {
	public:

	// Encodes a tree to a single string.
	string serialize(TreeNode* root) 
	{
		if(!root) return "";
		string s="";
		queue<TreeNode*> q;
		q.push(root);
		while(!q.empty())
		{
			TreeNode* curnode=q.front();
			q.pop();
			if(curnode==NULL) s.append("#,");
			else s.append(to_string(curnode->val)+',');
			if(curnode!=NULL)
			{
				q.push(curnode->left);
				q.push(curnode->right);
			}
		}
		return s;

	}

	// Decodes your encoded data to tree.
	TreeNode* deserialize(string data) 
	{
		if(data.size()==0) return NULL;
		stringstream s(data);
		string str;
		getline(s,str,',');
		queue<TreeNode*>q;
		TreeNode* root=new TreeNode(stoi(str));
		q.push(root);
		while(!q.empty()){
			TreeNode* node=q.front();
			q.pop();
			getline(s,str,',');
			if(str=="#"){
				node->left=NULL;
			}
			else{
				TreeNode* leftnode=new TreeNode(stoi(str));
				node->left=leftnode;
				q.push(leftnode);
			}
			getline(s,str,',');
			if(str=="#"){
				node->right=NULL;
			}
			else{
				TreeNode* rightnode=new TreeNode(stoi(str));
				node->right=rightnode;
				q.push(rightnode);
			}
		}
		return root;

	}
};