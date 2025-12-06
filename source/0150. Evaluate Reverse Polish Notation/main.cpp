#include <stack>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> token_nums;
        for (string token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int two = token_nums.top();
                token_nums.pop();
                int one = token_nums.top();
                token_nums.pop();

                if (token == "+")
                    token_nums.push(one + two);
                else if (token == "-")
                    token_nums.push(one - two);
                else if (token == "*")
                    token_nums.push(one * two);
                else if (token == "/")
                    token_nums.push(one / two);
                    
            } else {
                token_nums.push(stoi(token));
            }
        }
        
        return token_nums.top();
    }
};