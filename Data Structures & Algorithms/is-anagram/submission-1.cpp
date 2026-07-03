class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.size()!=t.size()) return false;
        unordered_map<char,int> s1;
        unordered_map<char,int> t1;
        for(int i=0;i<s.size();i++){
            s1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            t1[t[i]]++;
        }

        for(auto x: s1){
            char ch1=x.first;
            int frq=x.second;
            if(t1.find(ch1)!=t1.end()){
                if(frq!=t1[ch1])return false;
            }
            else return false;
        }
        return true;
    }
};
