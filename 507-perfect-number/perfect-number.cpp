class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num == 1) return false;
        vector<int> div;
        div.push_back(1);
        bool ans = false;
        int sum =1;
        for(int i=2;i<num;i++)
        {
            if(num%i ==0)
            {
                sum += i;
            }
        }
        if(sum == num)
        {
            ans = true;
        }
        return ans;
    }
};