class Solution {
public:
Node* getInorderSuccessor(Node* root) {
while (root->left != NULL)
root = root->left;
return root;
}

Node* delNode(Node* root, int k) {
if (root == NULL)
return NULL;

if (k < root->data) {
root->left = delNode(root->left, k);
}
else if (k > root->data) {
root->right = delNode(root->right, k);
}
else {
if (root->left == NULL && root->right == NULL) {
delete root;
return NULL;
}
if (root->left == NULL) {
Node* temp = root->right;
delete root;
return temp;
}
if (root->right == NULL) {
Node* temp = root->left;
delete root;
return temp;
}
Node* succ = getInorderSuccessor(root->right);
root->data = succ->data;
root->right = delNode(root->right, succ->data);
}
return root;
}
};
