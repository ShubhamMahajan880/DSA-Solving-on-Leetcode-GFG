class Solution{
public:
    string rearrangeString(string str){
        vector<int> freq(26,0);
        for(char c: str) freq[c-'a']++;
        priority_queue<pair<int,char>> pq;
        for(int i=0;i<26;i++){
            if(freq[i]>0) pq.push({freq[i], char('a'+i)});
        }
        string res="";
        pair<int,char> prev={0,'#'};
        while(!pq.empty()){
            auto cur=pq.top(); pq.pop();
            res.push_back(cur.second);
            cur.first--;
            if(prev.first>0) pq.push(prev);
            prev=cur;
        }
        if(res.size()!=str.size()) return "";
        return res;
    }
};
