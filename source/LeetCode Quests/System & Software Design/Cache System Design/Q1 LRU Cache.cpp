#include <map>
#include <algorithm>
#include <vector>
using namespace std;

class LRUCache {
map<int, int> cache;
vector<int> recent;
int c;
    
public:
    LRUCache(int capacity) {
        c = capacity;
    }
    
    int get(int key) {
        auto it = find(recent.begin(), recent.end(), key);
        if (it == recent.end()) return -1;
        
        recent.erase(it);
        recent.push_back(key);
        
        return cache[key];
    }
    
    void put(int key, int value) {
        cache[key] = value;
        
        auto it = find(recent.begin(), recent.end(), key);
        if (it != recent.end())
            recent.erase(it);
        recent.push_back(key);
        
        if (cache.size() > c) {
            cache.erase(cache.find(recent[0]));
            recent.erase(recent.begin());
        }
    }
};