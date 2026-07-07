class Solution {
public:
    bool rowvalidation(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> freq;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    freq[board[i][j]]++;
                    if (freq[board[i][j]] > 1) return false;
                }
            }
        }
        return true;
    }

    bool colvalidation(vector<vector<char>>& board) {
        for (int j = 0; j < 9; j++) {
            unordered_map<char, int> freq;
            for (int i = 0; i < 9; i++) {
                if (board[i][j] != '.') {
                    freq[board[i][j]]++;
                    if (freq[board[i][j]] > 1) return false;
                }
            }
        }
        return true;
    }

    bool boxvalidation(vector<vector<char>>& board) {
        for (int startRow = 0; startRow < 9; startRow += 3) {
            for (int startCol = 0; startCol < 9; startCol += 3) {
                unordered_map<char, int> freq;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char c = board[startRow + i][startCol + j];
                        if (c != '.') {
                            freq[c]++;
                            if (freq[c] > 1) return false;
                        }
                    }
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        return rowvalidation(board) && colvalidation(board) && boxvalidation(board);
    }
};