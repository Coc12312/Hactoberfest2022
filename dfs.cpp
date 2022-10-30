/*
https://leetcode.com/problems/pascals-triangle/
*/
  vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        res.push_back({1});
        for(int i=2;i<=numRows;i++)
        {
            vector<int> cv;
            cv.push_back(1);
            for(int j=0;j<res[res.size()-1].size()-1;j++)
            {
                int val=res[res.size()-1][j]+res[res.size()-1][j+1];
                cv.push_back(val);
            }
            cv.push_back(1);
            res.push_back(cv);
        }
        return res;
    }
