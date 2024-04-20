//
// Created by Lenovo on 2024/4/20.
//
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

//class Solution {
//public:
//    int maxProduct(vector<int> &nums) {
//        int n = nums.size();
//        stack<int> s;
//        vector<int> dp(n);vector<int> d(n);
//        int res=nums[0]*nums[0];
//
//        for(int i=1;i< n;i++){
//            while(!s.empty()&& nums[i]<=nums[s.top()]){
//                s.pop();
//            }
//            if (!s.empty() ) d[i] = ((i - s.top()) * nums[i]) + dp[s.top()];
//            else d[i] = (i + 1) * nums[i];
//            dp[i] =nums[i]*d[i];
//            s.push(i);
//
//            res=max(dp[i-1],dp[i]);
//        }
//    }
//
//};
//结果错误！！！
int main() {
    Solution s;
    vector<int> nums = {-2, 0, -1};
    cout << s.maxProduct(nums) << endl;
    return 0;
}