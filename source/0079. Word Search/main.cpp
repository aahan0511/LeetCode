#include <algorithm>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

class Solution {
int m, n;
unordered_map<long long, bool> cache;

bool find(vector<vector<char>>& board, string word, int x, int y) {
    if (word.size() == 1 && board[x][y] == word[0]) 
        return true;
    if (board[x][y] != word[0]) 
        return false;
    board[x][y] = '-';
    string w = word.substr(1);
    
    if (x > 0)
        if (find(board, w, x - 1, y)) 
            return true;
    if (y > 0)
        if (find(board, w, x, y - 1)) 
            return true;
    if (x + 1 < m)
        if (find(board, w, x + 1, y)) 
            return true;
    if (y + 1 < n)
        if (find(board, w, x, y + 1)) 
            return true;
    
    board[x][y] = word[0];
    return false;
}
    
public:
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        
        char first = word[0];
        char last = word[word.size() - 1];
    
        int freq0 = 0;
        int freq1 = 0;
        for (int row = 0; row < m; ++row) {
            for (int col = 0; col < n; ++col) {
                char &cell = board[row][col];
                if (cell == first) ++freq0;
                if (cell == last) ++freq1;
            }
        }
        
        if (freq0 > freq1) reverse(word.begin(), word.end());
        
        for (int row = 0; row < m; ++row) {
            for (int col = 0; col < n; ++col) {
                if (find(board, word, row, col)) 
                    return true;
            }
        }
        return false;
    }
};