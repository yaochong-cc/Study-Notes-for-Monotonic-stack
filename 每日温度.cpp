#include <iostream>
#include <vector>
#include <stack>
using namespace std;
////暴力法
////超时啦，wu~~~
//class Solution {
//public:
//	vector<int> dailyTemperatures(vector<int>& temperatures) {
//		vector<int> res;
//		for (int i = 0; i < temperatures.size(); i++) {
//			for (int j = i + 1; j < temperatures.size(); j++) {
//				if (temperatures[j] > temperatures[i]) {
//					res.push_back(j - i);
//					break;
//				}
//			}
//			if (res.size() == i) res.push_back(0);
//		}
//		return res;
//	}
//};
////单调栈
//class Solution {
//public:
//	vector<int> dailyTemperatures(vector<int>& temperatures) {
//		stack<int> st;
//		vector<int> res(temperatures.size(), 0);
//		st.push(0);
//		for (int i = 1; i < temperatures.size(); i++) {
//			if (temperatures[i] < temperatures[st.top()]) {
//				st.push(i);
//			}
//			else if (temperatures[i] == temperatures[st.top()]) {
//				st.push(i);
//			}
//			else {
//				while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
//					res[st.top()] = i - st.top();
//					st.pop();
//				}
//				st.push(i);
//			}
//		}
//		return res;
//	}
//};
////从后向前遍历：
class Solution {
public:
	vector<int> dailyTemperatures(vector<int>& temperatures) {
		vector<int> res(temperatures.size(), 0);
		stack<int> st;
		for (int i = temperatures.size() - 1; i >= 0; i--) {
			while (!st.empty() && temperatures[i] >= temperatures[st.top()]) {
				st.pop();
			}
			if (!st.empty()) {
				res[i] = st.top() - i;
			}
			st.push(i);
		}
		return res;
	}
};
//从前向后遍历
class Solution {
public:
	vector<int> dailyTemperatures(std::vector<int>& temperatures) {
		vector<int> res(temperatures.size(), 0);
		stack<int> st;

		for (int i = 0; i < temperatures.size(); i++) {
			while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
				int prevIndex = st.top();
				st.pop();
				res[prevIndex] = i - prevIndex;
			}
			st.push(i);//栈中存储数组的索引
		}
		return res;
	}
};

int main() {
	Solution sol;
	vector<int> temperatures{ 73, 74, 75, 71, 69, 72, 76, 73 };
	vector<int> res = sol.dailyTemperatures(temperatures);
	for (auto i : res) {
		cout << i << " ";
	}
	return 0;
}