class Solution {
private:
 void sol(vector<string>& res,int l,int r,string curr,int n)
 {
    if(curr.length() == 2*n)
    {
        res.push_back(curr);
        return;
    }
    if(l<n)
    {
        sol(res,l+1,r,curr+'(',n);
    }
    if(l>r)
    {
        sol(res,l,r+1,curr+')',n);
    }
 }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        sol(res,0,0,"",n);
        return res;
    }
};