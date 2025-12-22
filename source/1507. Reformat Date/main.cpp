#include <string>
#include <unordered_map>
using namespace std;

class Solution {
    static unordered_map<string, string> months;

public:
    string reformatDate(string date) {
        int space_1 = date.find(' ');
        int space_2 = space_1 + 4;

        string day_date = date.substr(0, space_1 - 2);
        string day = (day_date.size() == 1) ? ("0" + day_date) : day_date;

        string month_date = date.substr(space_1 + 1, 3);
        string month = months[month_date];

        string year = date.substr(space_2 + 1);

        return year + "-" + month + "-" + day;
    }
};

unordered_map<string, string> Solution::months = {
    {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"},
    {"Apr", "04"}, {"May", "05"}, {"Jun", "06"},
    {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"},
    {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}
};
