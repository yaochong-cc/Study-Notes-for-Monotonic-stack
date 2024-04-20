//#include <iostream>
//#include <vector>
//#include <stack>
//using namespace std;
//
////class Solution {
////public:
////    int trap(std::vector<int>& height) {
////        int n = height.size();
////        stack<int> st;
////        int res = 0;
////
////        for (int i = 0; i < n; i++) {
////            while (!st.empty() && height[i] > height[st.top()]) {
////                int top = st.top();
////                st.pop();
////                if (st.empty()) {
////                    break; // 无法形成凹槽，直接跳出循环
////                }
////                int width = i - st.top() - 1;
////                int boundedHeight = min(height[i], height[st.top()]) - height[top];
////                res += width * boundedHeight;
////            }
////            st.push(i);
////        }
////        return res;
////    }
////};
//
//
//int main() {
//	Solution s;
//	vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
//	cout << s.trap(height) << endl;	
//	return 0;
//}