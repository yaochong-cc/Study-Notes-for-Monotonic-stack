#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(i);
            else {
                if (st.empty()) return false;
                if (s[i] == ')' && s[st.top()] != '(') return false;
                if (s[i] == '}' && s[st.top()] != '{') return false;
                if (s[i] == ']' && s[st.top()] != '[') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;
    string s = "()[]{}";
    cout << sol.isValid(s) << endl;
    return 0;
}