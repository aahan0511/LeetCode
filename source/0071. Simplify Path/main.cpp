#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> file;
        int forget = 0;
        for (int i = path.size() - 1; i >= 0; --i) {
            if (path[i] == '/') {
                string sub = path.substr(i + 1);
                path = path.substr(0, i);
                if (sub != "" && sub != ".") {
                    if (sub == "..") forget++;
                    else if (forget == 0) file.push(sub);
                    else --forget;
                }
            }
        } 
        
        string file_path = "";
        while (file.size() > 0) {
            file_path += "/" + file.top();
            file.pop();
        }
        if (file_path == "") return "/";
        return file_path;
    }
};