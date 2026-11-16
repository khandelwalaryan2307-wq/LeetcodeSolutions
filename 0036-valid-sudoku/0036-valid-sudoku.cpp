
class Solution {
public:
    bool issafe(char no, int i, int j, vector<vector<char>>& board) {

        // Check row
        for(int k = 0; k < 9; k++) {
            if(k != j && board[i][k] == no)
                return false;
        }

        // Check column
        for(int k = 0; k < 9; k++) {
            if(k != i && board[k][j] == no)
                return false;
        }

        // Check 3x3 box
        int si = (i / 3) * 3;
        int sj = (j / 3) * 3;

        for(int l = si; l < si + 3; l++) {
            for(int z = sj; z < sj + 3; z++) {
                if((l != i || z != j) && board[l][z] == no)
                    return false;
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {

                if(board[i][j] == '.')
                    continue;

                if(!issafe(board[i][j], i, j, board))
                    return false;
            }
        }

        return true;
    }
};
