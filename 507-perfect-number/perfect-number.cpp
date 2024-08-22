class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1) return false;
        vector<int> div;
        div.push_back(1);
        bool ans = false;
        for(int i=2;i<num;i++)
        {
            if(num%i ==0)
            {
                div.push_back(i);
            }
        }
        int sum =0;
        for(int i=0;i<div.size();i++)
        {
            sum+=div[i];
        }
        if(sum == num)
        {
            ans = true;
        }
        return ans;
    }
};