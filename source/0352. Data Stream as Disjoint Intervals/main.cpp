#include <vector>
#include <algorithm>
using namespace std;

class SummaryRanges {
vector<int> array;
    
public:    
    void addNum(int value) {
        array.push_back(value);
    }
    
    vector<vector<int>> getIntervals() {
        if (size(array) == 0) return {};
        if (size(array) == 1) return {{array[0], array[0]}};

        sort(array.begin(), array.end());

        vector<vector<int>> intervals;
        bool interval_started = false;
        vector<int> interval = {array[0], array[0]};

        for (int idx = 0; idx < size(array); idx++) {
            if (!interval_started) {
                interval[0] = array[idx];
                interval_started = true;
            }

            if (idx == size(array) - 1) {
                interval[1] = array[idx];
        
                intervals.push_back(interval);
                continue;
            }
            if (array[idx] + 1 != array[idx + 1] && array[idx] != array[idx + 1]) {
                interval[1] = array[idx];
                interval_started = false;

                intervals.push_back(interval);
            }
        }

        return intervals;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */