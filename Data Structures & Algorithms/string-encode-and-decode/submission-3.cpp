class Solution {
   public:
    string encode(vector<string>& strs) {
       string encode="";
       for(auto it:strs){
        encode+=to_string(it.size())+"#"+it;
       }
       cout<<encode;
       return encode;

    }
    // "5#Hello5#World"
    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j));
            ans.push_back(s.substr(j+1,len));
            i=j+1+len;
        }
        return ans;
    }
};
