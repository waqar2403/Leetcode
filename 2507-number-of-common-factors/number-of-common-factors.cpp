class Solution {
public:
    int commonFactors(int a, int b) {
        int gcdVal = gcd(a,b);
        int count=0;
        for(int i=1;i<=gcdVal;i++)
        {
            if(gcdVal%i ==0 )
            {
                count++;
            }
        }
        return count;
    }
};