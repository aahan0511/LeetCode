#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<vector<int>>> winning = {
            {
                {0,0},
                {0,1},
                {0,2}
            }, {
                {1,0},
                {1,1},
                {1,2}
            }, {
                {2,0},
                {2,1},
                {2,2}
            }, {
                {0,0},
                {1,0},
                {2,0}
            }, {
                {0,1},
                {1,1},
                {2,1}
            }, {
                {0,2},
                {1,2},
                {2,2}
            }, {
                {0,0},
                {1,1},
                {2,2}
            }, {
                {0,2},
                {1,1},
                {2,0}
            }
        };
        
        vector<vector<int>> board(3, {-1, -1, -1});
        bool turn = true;
        for (vector<int> &move : moves) {
            board[move[0]][move[1]] = turn;
            turn = !turn;
        }
        
        for (vector<vector<int>> &w : winning) {
            vector<int> &one = w[0];
            int board_one = board[one[0]][one[1]];
            vector<int> &two = w[1];
            int board_two = board[two[0]][two[1]];
            vector<int> &three = w[2];
            int board_three = board[three[0]][three[1]];
            
            if (
                board_one == board_two && board_two == board_three &&
                board_one != -1
            ) return board_one ? "A" : "B";
        }
        
        return (moves.size() == 9) ? "Draw" : "Pending";
    }
};