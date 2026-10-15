class Solution {
   public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        if(s.size()!=t.size())return false;
        int frq[26]={0};
        for(int i=0;i<n;i++){
            frq[s[i]-'a']++;
            frq[t[i]-'a']--;
        }
        for(auto it : frq) if(it!=0)return false;
        return true;
       
    }
};
