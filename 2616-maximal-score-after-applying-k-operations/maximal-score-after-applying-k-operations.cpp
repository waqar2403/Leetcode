class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long res=0;
        priority_queue<long long> pq(nums.begin(),nums.end());

        while(k--)
        {
           long long top = pq.top();
           pq.pop();
           res += top;

           long long e = (top+2)/3;
           pq.push(e);
        }
        return res;
    }
};