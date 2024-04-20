////
//// Created by Lenovo on 2024/4/20.
////
////71.简化路径
////给定一个字符串 path，表示一个文件系统中的文件路径（Unix 风格），请你实现一个函数来将其转换为简化路径。
//
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//class Solution {
//public:
//    string simplifyPath(string path) {
//        auto split = [](const string& s, char delim) -> vector<string> {
//            vector<string> ans;
//            string cur;
//            for (char ch: s) {
//                if (ch == delim) {
//                    ans.push_back(move(cur));
//                    cur.clear();
//                }
//                else {
//                    cur += ch;
//                }
//            }
//            ans.push_back(move(cur));
//            return ans;
//        };
//
//        vector<string> names = split(path, '/');
//        vector<string> stack;
//        for (string& name: names) {
//            if (name == "..") {
//                if (!stack.empty()) {
//                    stack.pop_back();
//                }
//            }
//            else if (!name.empty() && name != ".") {
//                stack.push_back(move(name));
//            }
//        }
//        string ans;
//        if (stack.empty()) {
//            ans = "/";
//        }
//        else {
//            for (string& name: stack) {
//                ans += "/" + move(name);
//            }
//        }
//        return ans;
//    }
//};
//
//int main() {
//    Solution s;
//    return 0;
//}