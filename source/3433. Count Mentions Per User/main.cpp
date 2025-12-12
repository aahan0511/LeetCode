#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        sort(events.begin(), events.end(), [] (vector<string> a, vector<string> b) {
            if (a[1] == b[1])
                return a[0] == "OFFLINE";
            return stoi(a[1]) < stoi(b[1]);
        });
        
        vector<int> mentions(numberOfUsers, 0);
        vector<int> online(numberOfUsers, 0);
        
        for (vector<string> &event : events) {
            if (event[0] == "OFFLINE") {
                online[stoi(event[2])] = stoi(event[1]) + 60;
            } else {
                if (event[2] == "ALL") {
                    for (int &mention : mentions) 
                        mention ++;
                }
                        
                else if (event[2] == "HERE") {
                    int timestamp = stoi(event[1]);
                    for (int idx = 0; idx < numberOfUsers; idx++) {
                        if (online[idx] <= timestamp) mentions[idx] ++;
                    }
                }
                
                else {
                    string ids = event[2];
                    istringstream iss(ids);
                    
                    string id;
                    while (iss >> id) {
                        mentions[stoi(id.substr(2))]++;
                    }
                }
            }
        }
        
        return mentions;
    }
};