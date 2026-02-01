
class Solution {
  public:
    string removeConsonants(string s) {
        string ans;
        
        for(int i=0; i<s.size();i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
            s[i] == 'u'|| s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || 
            s[i] == 'O' || s[i] == 'U')
            {
                ans+=s[i];
            }
            
        }
        if(ans.size()==0)
        {
            return "No Vowel";
        }
        return ans;
        
    }
};