class Solution {
public:
    Node* connect(Node* root) {
        if (root == nullptr)
            return nullptr;

        Node* levelStart = root;

        while (levelStart) {
            Node dummy(0);
            Node* prev = &dummy;

            Node* curr = levelStart;

            while (curr) {
                if (curr->left) {
                    prev->next = curr->left;
                    prev = prev->next;
                }

                if (curr->right) {
                    prev->next = curr->right;
                    prev = prev->next;
                }

                curr = curr->next;
            }

            levelStart = dummy.next;
        }

        return root;
    }
};