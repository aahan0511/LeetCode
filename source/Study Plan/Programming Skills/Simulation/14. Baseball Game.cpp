// 682. Baseball Game

#include <numeric>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> scores;
        for (string op : operations) {
            int s = scores.size() - 1;
            if (op == "+") {
                int score = scores[s] + scores[s - 1];
                scores.push_back(score);
            } else if (op == "D") {
                int score = scores[s] * 2;                
                scores.push_back(score);
            } else if (op == "C") {
                scores.pop_back();
            } else {
                scores.push_back(stoi(op));
            }
        }
        
        return accumulate(scores.begin(), scores.end(), 0);
    }
};