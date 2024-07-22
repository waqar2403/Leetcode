class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> mp(names.size());
        for(int i=0;i<names.size();i++)
        {
            mp[i] = {heights[i],names[i]};
        }
        sort(mp.begin(),mp.end(),greater<>());
        for(int i =0 ;i<mp.size();i++)
        {
            names[i] = mp[i].second;
        }
        return names;
    }
};