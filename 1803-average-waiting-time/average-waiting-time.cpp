class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans;
        double sum=0;
        int time = 0;
        vector<int> temp;
        for(int i=0;i<customers.size();i++)
        {
            
            if(time<customers[i][0])
            {
                time =  customers[i][0];
            }
            time +=customers[i][1];
            sum +=(time - customers[i][0]);
            cout<<time;
        }
       ans = sum/(customers.size());
        
    
        return ans;
    }
};

