#include <vector>
using namespace std;

class Bank {
int n;
vector<long long> accounts;
    
public:
    Bank(vector<long long>& balance) {
        n = balance.size();
        accounts = balance;
    }
    
    bool transfer(int account1, int account2, long long money) {
        if (account1 > n || account2 > n || accounts[account1 - 1] < money) 
            return false;
        accounts[account1 - 1] -= money;
        accounts[account2 - 1] += money;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if (account > n) 
            return false;
        accounts[account - 1] += money;
        return true;
    }
    
    bool withdraw(int account, long long money) {
        if (account > n || accounts[account - 1] < money) 
            return false;
        accounts[account - 1] -= money;
        return true;        
    }
};