// Copyright 2018 Cocoon Psn.
// Author: Mr_Garfield
// Description：LeetCode63 小兵走棋盘II（带障碍物）

 int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
       
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
         if(m == 0||n == 0||obstacleGrid[0][0] == 1)
            return 0;
        vector<vector<int>> a(m, vector<int>(obstacleGrid[0].size(), 0));
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                
                if (obstacleGrid[i][j] == 1) a[i][j] = 0;
                else if (i == 0 && j == 0) a[i][j] = 1;
                else if (i == 0 && j > 0) a[i][j] = a[i][j - 1];
                else if (i > 0 && j == 0) a[i][j] = a[i - 1][j];
                else a[i][j] = a[i - 1][j] + a[i][j - 1];
               
            }
        }
        
        return a.back().back();
 }