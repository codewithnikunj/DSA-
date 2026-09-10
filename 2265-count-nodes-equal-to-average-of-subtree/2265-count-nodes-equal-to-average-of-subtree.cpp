/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        queue<TreeNode*>q;

        if(root == NULL){
            return 0;
        }
        q.push(root);

        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
             queue<TreeNode*> q2;
            q2.push(temp);

            int sum = 0;
            int nodes = 0;
             while (!q2.empty()) {
                TreeNode* curr = q2.front();
                q2.pop();

                sum += curr->val;
                nodes++;

                if (curr->left != NULL) {
                q2.push(curr->left);
                }
                if (curr->right != NULL) {
                    q2.push(curr->right);
                }
             }
               if (temp->val == sum / nodes) {
                count++;
            }

          if (temp->left != NULL) {
                q.push(temp->left);
            }

            if (temp->right != NULL) {
                q.push(temp->right);
            }
        }

        return count;


    }
};