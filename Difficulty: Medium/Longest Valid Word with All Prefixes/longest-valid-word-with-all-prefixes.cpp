class TrieNode{
public:
    TrieNode* child[26];
    bool isEnd;
    
    TrieNode(){
        isEnd = false;
        for(int i=0;i<26;i++)
            child[i] = NULL;
    }
};

class Solution{
public:
    
    void insert(TrieNode* root, const string &word){
        TrieNode* node = root;
        for(char c : word){
            int idx = c - 'a';
            if(node->child[idx] == NULL)
                node->child[idx] = new TrieNode();
            node = node->child[idx];
        }
        node->isEnd = true;
    }
    
    bool valid(TrieNode* root, const string &word){
        TrieNode* node = root;
        for(char c : word){
            int idx = c - 'a';
            node = node->child[idx];
            if(node == NULL || node->isEnd == false)
                return false;
        }
        return true;
    }
    
    string longestValidWord(vector<string>& arr){
        TrieNode* root = new TrieNode();
        
        for(auto &word : arr)
            insert(root, word);
        
        string ans = "";
        
        for(auto &word : arr){
            if(valid(root, word)){
                if(word.size() > ans.size() || 
                   (word.size() == ans.size() && word < ans)){
                    ans = word;
                }
            }
        }
        
        return ans;
    }
};