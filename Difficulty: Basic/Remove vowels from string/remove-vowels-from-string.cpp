// User function template for C++
class Solution {
  public:

    string removeVowels(string& s) {
        string ans;
        for(int i=0; i<s.size();i++)
        {
            if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'))
            {
                ans+=s[i];
            }
        }
        return ans;
    }
};