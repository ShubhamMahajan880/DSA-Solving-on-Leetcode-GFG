class Solution {
public:
Node* build(vector<int>& nums, int l, int r) {
if (l > r) return NULL;
int m = (l + r) / 2;
Node* root = new Node(nums[m]);
root->left = build(nums, l, m - 1);
root->right = build(nums, m + 1, r);
return root;
}

Node* sortedArrayToBST(vector<int>& nums) {
return build(nums, 0, nums.size() - 1);
}
};
