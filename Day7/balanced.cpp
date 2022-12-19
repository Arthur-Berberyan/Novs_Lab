class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        if(!root->left && !root->right)
        {   
            root->val=1; 
            return true; 
        }


        if(!isBalanced(root->left) || !isBalanced(root->right))
        {
            return false;
        }
        int left=0, right=0;
        if(root->left)
        {
            left=root->left->val;
        }
        if(root->right)
        {
            right = root->right->val;
        }
        if(abs(left-right)>1)
        {
            return false;
        }
        root->val = max(left,right)+1;
        return true;
    }
};

//Time complexity O(n)
