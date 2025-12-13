// 3606. Coupon Code Validator

#include <algorithm>
#include <vector>
#include <string>
#include <regex>
using namespace std;

class Solution {
public:
    vector<string> validateCoupons(
        vector<string>& code, 
        vector<string>& businessLine, 
        vector<bool>& isActive
    ) {
        vector<string> valid_bL = {"electronics", "grocery", "pharmacy", "restaurant"};
        regex valid_c(R"(^[\w]+$)");
        
        vector<pair<string, int>> valid_coupons_with_bL;
        
        for (int i = 0; i < code.size(); i++) {
            if (
                isActive[i] &&
                find(valid_bL.begin(), valid_bL.end(), businessLine[i]) != valid_bL.end() &&
                regex_match(code[i], valid_c)
            ) {
                int bL;
                if (businessLine[i][0] == 'e') bL = 1;
                else if (businessLine[i][0] == 'g') bL = 2;
                else if (businessLine[i][0] == 'p') bL = 3;
                else if (businessLine[i][0] == 'r') bL = 4;
                
                valid_coupons_with_bL.push_back({code[i], bL});
            }
        }
        
        sort(
            valid_coupons_with_bL.begin(),
            valid_coupons_with_bL.end(),
            [] (pair<string, int> &a, pair<string, int> &b) {
                if (a.second != b.second)
                    return a.second < b.second;
                return a.first < b.first;
            }
        );
        
        vector<string> valid_coupons;
        for (auto &v_c_w_b : valid_coupons_with_bL)
            valid_coupons.push_back(v_c_w_b.first);
        
        return valid_coupons;
    }
};