class Solution {
private:
  void make_Comb(vector<int>& candidates,int target,int indx,int total,vector<int>& comb,vector<vector<int>>& res)
  {
    if(total == target)
    {
        res.push_back(comb);
        return;
    }
    if(total > target || indx>= candidates.size())
    {
        return;
    }
    comb.push_back(candidates[indx]);
    make_Comb(candidates,target,indx,total+candidates[indx],comb,res);
    comb.pop_back();
    make_Comb(candidates,target,indx+1,total,comb,res);
  }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> comb;
        make_Comb(candidates,target,0,0,comb,res);
        return res;
    }
};