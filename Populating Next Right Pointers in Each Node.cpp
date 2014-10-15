/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
 
 
class Solution {
public:

void connectNode(TreeLinkNode *node)
        {
            if(node->left)
            {
                node->left->next = node->right;
                if(node->next)
                {
                    node->right->next = node->next->left;
                }
                else
                {
                    node->right->next = NULL;
                }
                connectNode(node->left);
                connectNode(node->right);
            }
            
            else
            {
                return;
            }
            
        }
        

    void connect(TreeLinkNode *root) {

        if(root == NULL)
        return;
        
        root->next = NULL;
        connectNode(root);
    }
};