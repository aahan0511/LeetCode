#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> matches;
        
        for (string ref : words) {
            int ref_size = size(ref);

            for (string word : words) {
                int word_size = size(word);

                if (ref == word || ref_size >= word_size) {
                    continue;
                }

                bool found = false;

                for (int idx = 0; idx < (word_size - ref_size); idx++) {
                    cout << word.substr(idx, ref_size) << endl;
                    if (word.substr(idx, ref_size) == ref) {
                        matches.push_back(ref);
                        found = true;
                        break;
                    }
                }

                if (found) {
                    break;
                }
            }
        }

        return matches;
    }
};