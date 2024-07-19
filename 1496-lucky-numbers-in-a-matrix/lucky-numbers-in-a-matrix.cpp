class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> rowMin;
        vector<int> colMax;
        vector<int> lucky;
        
        for(int i=0;i<rows;i++)
        {
            int rMin =  INT_MAX;
            for(int j=0;j<cols;j++)
            {
               rMin = min(rMin,matrix[i][j]); 
            }
            rowMin.push_back(rMin);
            cout<<rMin;
        }
        for(int i=0;i<cols;i++)
        {
            int cMax =  INT_MIN;
            for(int j=0;j<rows;j++)
            {
              cMax = max(cMax,matrix[j][i]); 
              
            }
            colMax.push_back(cMax);
            cout<<cMax;
        }
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(rowMin[i] == colMax[j])
                {
                    lucky.push_back(matrix[i][j]);
                }
            }
        }
        return lucky;
    }
};