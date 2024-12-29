class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        string s1;
        for(int i=0; i<strs.size(); i++){
            s1 = strs[i];
            sort(s1.begin(),s1.end());
            mp[s1].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        vector<string> v;
        for(auto i: mp){
            for(auto j:i.second){
                v.push_back(j);
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};
