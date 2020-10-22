class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        map<int, int> r, c;
        int row = matrix.size();
        int col  = matrix[0].size();
        
        for(int i=0; i<matrix.size(); i++)
        {
            for(int j = 0; j<matrix[i].size(); j++)
            {
                if(matrix[i][j]==0)
                {
                    r[i] = 1;
                    c[j] = 1;
                }
            }
        }
        
        for(int i = 0; i<row; i++)
        {
            if(r[i]==1)
            {
                for(int j = 0; j<col; j++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        
         for(int i = 0; i<col; i++)
        {
            if(c[i]==1)
            {
                for(int j = 0; j<row; j++)
                {
                    matrix[j][i] = 0;
                }
            }
        }
    }
};
