/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode *p, TreeNode *q) {
    	vector<int> a1,a2,b1,b2;
    	
    	preOrder(&a1,p,1);
    	preOrder(&b1,q,1);
    	inOrder(&a2,p,1);
    	inOrder(&b2,q,1);
    	
    	
    	
    	if ((a1==b1)&&(a2==b2))
    		return true;
    	else
    		return false;
    }
    
    void preOrder(vector<int> *a,TreeNode *p,int num) {
    	if (p==NULL)
    		return;
    	a->push_back(num);
    	preOrder(a,p->left,2*num);
    	preOrder(a,p->right,2*num+1);
    }
    
    void inOrder(vector<int> *a,TreeNode *p,int num) {
    	if (p==NULL)
    		return;
    	inOrder(a,p->left,2*num);
    	a->push_back(p->val);
    	inOrder(a,p->right,2*num+1);
    }
    
    
};
