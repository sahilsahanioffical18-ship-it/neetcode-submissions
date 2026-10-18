class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>mp;
       for(auto it:nums){
        mp[it]++;
       }
       vector<int>ans;
       while(k!=0){
        int key=-1;
        int max_frq=-1;
        for(auto it:mp){
           if(max_frq<it.second){
            max_frq=it.second;
            key=it.first;
           }
        }
        ans.push_back(key);
        mp.erase(key);
        k--;
       }
       return ans;
    }
};
