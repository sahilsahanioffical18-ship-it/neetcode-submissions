class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(),strs.end());
    string res="";
    string ch1=strs[0];
    string ch2=strs[strs.size()-1];
    for(int i=0;i<ch1.size();i++){
        if(ch1[i]==ch2[i]) {
            res+=ch1[i];
        }
        else {
            break;
        }
    }
    return res;
    }
};