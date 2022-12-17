class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
    vector<int> vec;
    if(!root) 
    {
        return vec;
    }
    TreeNode* temp = root, *prev;
    while(temp){
        if(!temp->left){
            vec.push_back(temp->val);
            temp = temp->right;
        }else{
            prev = temp->left;
            while(prev->right&&(prev->right != temp))
                prev = prev->right;
            if(!prev->right){
                prev->right = temp;
                temp = temp->left;
            }else{
                vec.push_back(temp->val);
                prev->right = NULL;
                temp = temp->right;
            }
        }
    }
    return vec;
}
};
