class Solution {
public:

    bool isMagicSquare(int i, int j, vector<vector<int>>&grid) {
        int c1 = grid[i][j] + grid[i+1][j] + grid[i+2][j];
        int c2 = grid[i][j+1] + grid[i+1][j+1] + grid[i+2][j+1];
        int c3 = grid[i][j+2] + grid[i+1][j+2] + grid[i+2][j+2];

        int r1 = grid[i][j] + grid[i][j+1] + grid[i][j+2];
        int r2 = grid[i+1][j] + grid[i+1][j+1] + grid[i+1][j+2];
        int r3 = grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2];

        int d1 = grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2];
        int d2 = grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j];

        if(c1 == c2 && c2 == c3 && c3 == r1 && r1 == r2 && r2 == r3 && r3 == d1 && d1 == d2) {
            set<int> unique;
            for(int a = i; a < i+3; a++) {
                for(int b = j; b < j+3; b++) {
                    int num = grid[a][b];
                    if(num < 1 || num > 9 || unique.count(num)) return false;
                    unique.insert(num);
                }
            }
        }

        if(c1 == c2 && c2 == c3 && c3 == r1 && r1 == r2 && r2 == r3 && r3 == d1 && d1 == d2) return true;
        
        return false;
        
    } 


    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int result = 0;

        if(row < 3 || col < 3) return false;

        for(int i = 0; i <= row-3; i++) {
            for(int j = 0; j <= col-3; j++) {
                if(isMagicSquare(i, j, grid)) result++;
            }
        }
        return result;
    }
};