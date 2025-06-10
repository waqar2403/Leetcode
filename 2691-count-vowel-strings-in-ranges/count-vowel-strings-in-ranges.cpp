class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_map<int,int> mp;
        vector<int> parr(words.size());
        unordered_map<char,int> v;
        v['a']=1;v['e']=1;v['i']=1;v['o']=1;v['u']=1;
        int n0= words[0].size();
        parr[0] = v.find(words[0][0]) != v.end() && v.find(words[0][n0-1]) != v.end() ? 1:0; 
        for(int i=1;i<words.size();i++){
            int n = words[i].size();
            if(v.find(words[i][0]) != v.end() && v.find(words[i][n-1]) != v.end()){
             parr[i] = parr[i-1]+1;  
            }else{
                parr[i] = parr[i-1];
            }
        }
        vector<int> ans(queries.size());
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
            int r=queries[i][1];
            if(l==0){
                ans[i] = parr[r];
            }else{
                ans[i] = parr[r] - parr[l-1];
            }
        }
        return ans;
    }
};