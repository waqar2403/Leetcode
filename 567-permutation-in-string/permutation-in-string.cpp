class Solution {
public:
    bool allzero(vector<int>& v)
    {
        for(int i=0;i<v.size();i++)
            if(v[i]!=0)return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {

        vector<int> v(26,0);
        int n1=s1.size();
        int n2=s2.size();

        for(int i=0;i<n1;i++)
            v[s1[i]-97]++;

        int k=n1;
        int i=0,j=0;
        while(j<n2)
        {
            v[s2[j]-97]--;

            if(j-i+1==k)
            {
                if(allzero(v))return true;
                v[s2[i]-97]++;
                i++;
            }
            j++;
        }
        return false;
        
    }
};