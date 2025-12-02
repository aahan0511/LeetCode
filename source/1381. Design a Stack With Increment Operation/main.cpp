#include <vector>
using namespace std;

class CustomStack {
vector<int> stack;
int max_size;

public:
    CustomStack(int maxSize) {
        max_size = maxSize;
    }
    
    void push(int x) {
        if (size(stack) != max_size)
            stack.push_back(x);
    }
    
    int pop() {
        if (size(stack) == 0)
            return -1;

        int value = stack[size(stack) - 1];
        stack.pop_back();

        return value;
    }
    
    void increment(int k, int val) {
        for (int i = 0; i < k && i < size(stack); i++) {
            stack[i] += val;
        }
    }
};